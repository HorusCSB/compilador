//limpar: cmake -B build
//rodar: cmake --build build

#include "visitor.h"
#include <sstream>

antlrcpp::Any Visitor::visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) {
    std::string nomeClasse = ctx->ID()->getText();
    int linha = ctx->getStart()->getLine();

    // Adiciona a classe como símbolo no escopo start
    Simbolo simbClasse{nomeClasse, "classe", "start", linha};
    tabelaPorEscopo["start"][nomeClasse] = simbClasse;

    // Muda escopo atual para o nome da classe
    escopoAtual = nomeClasse;

    visitChildren(ctx);

    escopoAtual = "start";
    return nullptr;
}

antlrcpp::Any Visitor::visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) {
    std::string nomeFuncao = ctx->ID()->getText();
    std::string tipoRetorno = ctx->tipo()->getText();
    int linha = ctx->getStart()->getLine();
    escopoAtual = nomeFuncao;
    tipoFuncaoAtual = tipoRetorno;

    // adiciona a função na tabela de símbolos (escopo start)
    Simbolo simboloFuncao{nomeFuncao, tipoRetorno, "start", linha};
    tabelaPorEscopo["start"][nomeFuncao] = simboloFuncao;

    // muda escopo antes de adicionar parâmetros
    escopoAtual = nomeFuncao;

    // add os parametros no escopo da função
    if (ctx->parametros()) {
        for (auto param : ctx->parametros()->parametro()) {
            std::string nomeParam = param->ID()->getText();
            std::string tipoParam = param->tipo()->getText();
            int linhaParam = param->getStart()->getLine();

            Simbolo simboloParam {nomeParam, tipoParam, escopoAtual, linhaParam, true};
            tabelaPorEscopo[escopoAtual][nomeParam] = simboloParam;
        }
    }

    // adiciona parâmetros ao mapa
    for (auto param : ctx->parametros()->parametro()) {
        std::string nomeParam = param->ID()->getText();
        std::string tipoParam = param->tipo()->getText();
        parametrosFuncao[nomeFuncao].push_back(tipoParam);
    }

    // visita corpo da função
    visitChildren(ctx);

    // restaura escopo start
    funcoesDeclaradas[nomeFuncao] = ctx;
    escopoAtual = "start";
    tipoFuncaoAtual = "";

    return nullptr;
}

antlrcpp::Any Visitor::visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) {
    std::string nome = ctx->ID()->getText();
    std::string tipo = ctx->tipo()->getText();
    int linha = ctx->getStart()->getLine();

    std::set<std::string> tiposPrimitivos = {"int", "float", "char", "string"};

    // Verifica se o tipo é válido
    if (!tiposPrimitivos.count(tipo) && !tabelaPorEscopo["start"].count(tipo)) {
        std::cerr << "ERRO: Linha " << linha << ": Tipo '" << tipo << "' nao declarado (classe inexistente?)\n";
        return nullptr;
    }

    if (tabelaPorEscopo[escopoAtual].count(nome)) {
        std::cerr << "ERRO: Linha " << linha << ": Variavel '" << nome << "' ja declarada no escopo '" << escopoAtual << "'.\n";
        return nullptr;
    }

    Simbolo simb {nome, tipo, escopoAtual, linha, false, ""};

    if (ctx->expressao()) {
        std::string expressaoTexto = ctx->expressao()->getText();

        if (expressaoTexto.rfind("new ", 0) == 0) {
            std::string nomeClasse = tipo;
            if (!tabelaPorEscopo["start"].count(nomeClasse)) {
                std::cerr << "ERRO: Linha " << linha << ": Classe '" << nomeClasse << "' nao foi declarada.\n";
                return nullptr;
            }

            simb.inicializado = true;

            // Instanciar atributos no escopo do objeto
            for (const auto& [atributo, simboloClasse] : tabelaPorEscopo[nomeClasse]) {
                Simbolo atributoInstancia = simboloClasse;
                atributoInstancia.escopo = nome;
                atributoInstancia.inicializado = false;
                atributoInstancia.valor = "";

                tabelaPorEscopo[nome][atributo] = atributoInstancia;
            }

            //std::cout << "DEBUG: Objeto '" << nome << "' instanciado com base na classe '" << nomeClasse << "'\n";
        } else {
            ResultadoExpr resultado = visit(ctx->expressao()).as<ResultadoExpr>();
            if (resultado.tipo != "undefined" && resultado.tipo != tipo) {
                std::cerr << "ERRO: Linha " << linha << ": Voce nao pode atribuir um tipo '" << resultado.tipo
                          << "' a variavel '" << nome << "' de tipo '" << tipo << "'.\n";
                return nullptr;
            }

            simb.inicializado = true;
            simb.valor = resultado.valor;
            //std::cout << "DEBUG: '" << nome << "' definido como " << resultado.valor << "\n";
        }
    }

    tabelaPorEscopo[escopoAtual][nome] = simb;

    if (tipo == "int" && simb.inicializado) {
        std::string nomeVar = "%" + nome;
        llvmSaida << nomeVar << " = alloca i32\n";
        llvmSaida << "store i32 " << simb.valor << ", i32* " << nomeVar << "\n";
    }

    return nullptr;
}


antlrcpp::Any Visitor::visitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) {
    std::string acesso = ctx->acesso()->getText();
    int linha = ctx->getStart()->getLine();
    std::string tipoVar;

    ResultadoExpr resultado = visit(ctx->expressao()).as<ResultadoExpr>();

    // verifica se é acesso a atributo obj.atributo
    if (acesso.find('.') != std::string::npos) {
        auto ponto = acesso.find('.');
        std::string obj = acesso.substr(0, ponto);
        std::string atributo = acesso.substr(ponto + 1);

        if (!atributoExiste(obj, atributo)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Atributo '" << atributo
                      << "' nao pertence ao objeto '" << obj << "'.\n";
            return nullptr;
        }

        std::string tipoClasse = tabelaPorEscopo[escopoAtual].count(obj)
                               ? tabelaPorEscopo[escopoAtual][obj].tipo
                               : tabelaPorEscopo["start"][obj].tipo;

        tipoVar = tabelaPorEscopo[tipoClasse][atributo].tipo;

        if (resultado.tipo != tipoVar && resultado.tipo != "undefined") {
            std::cerr << "ERRO: Linha " << linha
                      << ": Tipo incompativel na atribuicao de '" << acesso
                      << "'. Esperado '" << tipoVar << "', recebido '" << resultado.tipo << "'.\n";
            return nullptr;
        }

        // Armazena o valor no atributo da instância
        Simbolo atributoSimb;
        atributoSimb.nome = atributo;
        atributoSimb.tipo = tipoVar;
        atributoSimb.escopo = obj;
        atributoSimb.linha = linha;
        atributoSimb.inicializado = true;
        atributoSimb.valor = resultado.valor;

        tabelaPorEscopo[obj][atributo] = atributoSimb;

        //std::cout << "DEBUG: Atributo '" << acesso << "' definido como " << resultado.valor << "\n";
    } else {
        // Atribuição simples (variável local)
        if (!existeVariavel(acesso)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Variavel '" << acesso
                      << "' usada sem estar declarada.\n";
            return nullptr;
        }

        tipoVar = tabelaPorEscopo[escopoAtual].count(acesso)
                    ? tabelaPorEscopo[escopoAtual][acesso].tipo
                    : tabelaPorEscopo["start"][acesso].tipo;

        if (!tipoVar.empty() && tipoVar != resultado.tipo && resultado.tipo != "undefined") {
            std::cerr << "ERRO: Linha " << linha
                      << ": Tipo incompativel na atribuicao de '" << acesso
                      << "'. Esperado '" << tipoVar << "', recebido '" << resultado.tipo << "'.\n";
            return nullptr;
        }

        Simbolo& simb = tabelaPorEscopo[escopoAtual].count(acesso)
                        ? tabelaPorEscopo[escopoAtual][acesso]
                        : tabelaPorEscopo["start"][acesso];

        simb.valor = resultado.valor;
        simb.inicializado = true;

        //std::cout << "DEBUG: Variavel '" << acesso << "' definida como " << resultado.valor << "\n";
    }

    return nullptr;
}

antlrcpp::Any Visitor::visitExpressao(gramaticaParser::ExpressaoContext *ctx) {
    return visit(ctx->expressaoSoma()).as<ResultadoExpr>();
}

antlrcpp::Any Visitor::visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) {
    if (ctx->NUM_INT()) {
        return ResultadoExpr{"int", ctx->getText()};
    }

    if (ctx->NUM_FLOAT()) {
        return ResultadoExpr{"float", ctx->getText()};
    }

    if (ctx->STRING()) {
        std::string texto = ctx->STRING()->getText();
        texto = texto.substr(1, texto.length() - 2); // remove aspas
        return ResultadoExpr{"string", texto};
    }

    if (ctx->CHAR()) {
        std::string ch = ctx->CHAR()->getText();
        ch = ch.substr(1, ch.length() - 2); // remove aspas simples
        return ResultadoExpr{"char", ch};
    }

    if (ctx->ID()) {
        std::string texto = ctx->getText();
        
        // Se for algo como pss.idade
        if (texto.find('.') != std::string::npos) {
            auto ponto = texto.find('.');
            std::string obj = texto.substr(0, ponto);
            std::string atributo = texto.substr(ponto + 1);

            if (!atributoExiste(obj, atributo)) {
                std::cerr << "ERRO: Linha " << ctx->getStart()->getLine()
                          << ": Atributo '" << atributo << "' nao pertence a '" << obj << "'\n";
                return ResultadoExpr("undefined", "");
            }

            Simbolo simb = tabelaPorEscopo[obj][atributo];
            if (!simb.inicializado) {
                std::cerr << "ERRO: Linha " << ctx->getStart()->getLine()
                          << ": Atributo '" << atributo << "' de '" << obj << "' nao inicializado.\n";
                return ResultadoExpr(simb.tipo, "");
            }

            return ResultadoExpr(simb.tipo, simb.valor);
        }

        // variável simples
        if (!existeVariavel(texto)) {
            std::cerr << "ERRO: Linha " << ctx->getStart()->getLine()
                    << ": Variavel '" << texto << "' nao foi declarada.\n";
            return ResultadoExpr{"undefined", ""};
        }

    return acessarVariavel(texto);
    }

    if (ctx->chamadaFuncao()) {
        return visit(ctx->chamadaFuncao());
    }

    if (ctx->expressao()) {
        return visit(ctx->expressao());
    }

    return ResultadoExpr{"undefined", ""};
}


antlrcpp::Any Visitor::visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) {
    ResultadoExpr resultado = visit(ctx->expressaoProduto(0)).as<ResultadoExpr>();

    for (size_t i = 1; i < ctx->expressaoProduto().size(); ++i) {
        std::string op;
        if (ctx->SOMA(i - 1)) op = "+";
        else if (ctx->SUBTRACAO(i - 1)) op = "-";
        else op = "?";

        ResultadoExpr direito = visit(ctx->expressaoProduto(i)).as<ResultadoExpr>();

        // concatenação de string com qualquer coisa p/ os prints
        if (op == "+" &&
            ((resultado.tipo == "string" && direito.tipo != "undefined") ||
            (direito.tipo == "string" && resultado.tipo != "undefined"))) {

            resultado.tipo = "string";
            resultado.valor = resultado.valor + direito.valor;
            continue;
        }

        // soma/subtração numérica
        if ((resultado.tipo == "int" || resultado.tipo == "float") &&
            (direito.tipo == "int" || direito.tipo == "float")) {

            std::string tipoResultado = (resultado.tipo == "float" || direito.tipo == "float") ? "float" : "int";

            if (!ehNumero(resultado.valor) || !ehNumero(direito.valor)) {
                resultado.tipo = "undefined";
                resultado.valor = "";
                break;
            }

            double valEsq = std::stod(resultado.valor);
            double valDir = std::stod(direito.valor);
            double valFinal = (op == "+") ? valEsq + valDir : valEsq - valDir;

            resultado.tipo = tipoResultado;
            if (tipoResultado == "int")
                resultado.valor = std::to_string(static_cast<int>(valFinal));
            else
                resultado.valor = std::to_string(valFinal);
        } else {
            resultado.tipo = "undefined";
            resultado.valor = "";
            break;
        }
    }


    return resultado;
}

antlrcpp::Any Visitor::visitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *ctx) {
    ResultadoExpr resultado = visit(ctx->expressaoPrimaria(0)).as<ResultadoExpr>();

    for (size_t i = 1; i < ctx->expressaoPrimaria().size(); ++i) {
        std::string op = ctx->MULTIPLICACAO(i - 1) ? "*" : "/";
        ResultadoExpr direito = visit(ctx->expressaoPrimaria(i)).as<ResultadoExpr>();

        if ((resultado.tipo == "int" || resultado.tipo == "float") &&
            (direito.tipo == "int" || direito.tipo == "float")) {

            std::string tipoResultado = (resultado.tipo == "float" || direito.tipo == "float") ? "float" : "int";

            double valEsq = std::stod(resultado.valor);
            double valDir = std::stod(direito.valor);
            double valFinal = op == "*" ? valEsq * valDir : valEsq / valDir;

            resultado.tipo = tipoResultado;
            if (tipoResultado == "int")
                resultado.valor = std::to_string(static_cast<int>(valFinal));
            else
                resultado.valor = std::to_string(valFinal);
        } else {
            resultado.tipo = "undefined";
            resultado.valor = "";
            break;
        }
    }

    return resultado;
}


antlrcpp::Any Visitor::visitChamadaFuncao(gramaticaParser::ChamadaFuncaoContext *ctx) {
    std::string nomeFuncao = ctx->ID()->getText();
    int linha = ctx->getStart()->getLine();

    //SEMANTICA
    // verifica se a função foi declarada
    if (!funcoesDeclaradas.count(nomeFuncao)) {
        std::cerr << "ERRO: Linha " << linha
                  << ": Funcao '" << nomeFuncao
                  << "' chamada mas nao foi declarada.\n";
        return ResultadoExpr{"undefined", ""};
    }

    // avalia argumentos passados
    std::vector<ResultadoExpr> argumentos;
    if (ctx->argumentos()) {
        for (auto expr : ctx->argumentos()->expressao()) {
            argumentos.push_back(visit(expr).as<ResultadoExpr>());
        }
    }

    // recupera a definiçao da função
    auto funcCtx = funcoesDeclaradas[nomeFuncao];

    // verifica parâmetros
    std::vector<gramaticaParser::ParametroContext*> params;
    if (funcCtx->parametros()) {
        params = funcCtx->parametros()->parametro();
    }

    if (argumentos.size() != params.size()) {
        std::cerr << "ERRO: Linha " << linha
                  << ": Funcao '" << nomeFuncao
                  << "' esperava " << params.size()
                  << " argumentos, mas recebeu " << argumentos.size() << ".\n";
        return ResultadoExpr{"undefined", ""};
    }

    //INICIA INTERPRETACAO
    // salva escopo anterior
    std::string escopoAnterior = escopoAtual;
    escopoAtual = nomeFuncao;

    // cria escopo da função com os parâmetros e seus valores
    tabelaPorEscopo[escopoAtual].clear();
    for (size_t i = 0; i < argumentos.size(); ++i) {
        std::string nomeParam = params[i]->ID()->getText();
        std::string tipoParam = params[i]->tipo()->getText();

        Simbolo simbolo;
        simbolo.nome = nomeParam;
        simbolo.tipo = tipoParam;
        simbolo.escopo = escopoAtual;
        simbolo.valor = argumentos[i].valor;
        simbolo.inicializado = true;
        simbolo.linha = linha;

        tabelaPorEscopo[escopoAtual][nomeParam] = simbolo;
    }

    // executa comandos da função (blocoFuncao -> comandos + retorno)
    ResultadoExpr retornoFinal;
    for (auto comando : funcCtx->blocoFuncao()->comando()) {
        visit(comando);
    }

    antlrcpp::Any retorno = visit(funcCtx->blocoFuncao()->comandoRetorno());
    if (retorno.is<ResultadoExpr>()) {
        retornoFinal = retorno.as<ResultadoExpr>();
    }

    // restaura escopo pro formato originalk
    //std::cout << "DEBUG: Funcao '" << nomeFuncao << "' retornou: " << retornoFinal.tipo << " = " << retornoFinal.valor << "\n";
    escopoAtual = escopoAnterior;
    return retornoFinal;
}

antlrcpp::Any Visitor::visitComandoRetorno(gramaticaParser::ComandoRetornoContext *ctx) {
    int linha = ctx->getStart()->getLine();
    ResultadoExpr resultado = visit(ctx->expressao()).as<ResultadoExpr>();

    // verifica se o tipo do retorno é compatível com o tipo declarado da função
    if (!tipoFuncaoAtual.empty() &&
        resultado.tipo != "undefined" &&
        resultado.tipo != tipoFuncaoAtual) {
        
        std::cerr << "ERRO: Linha " << linha
                  << ": Retorno de tipo '" << resultado.tipo
                  << "' nao compativel com tipo declarado da funcao ('"
                  << tipoFuncaoAtual << "').\n";
    }

    return resultado;
}

antlrcpp::Any Visitor::visitAcesso(gramaticaParser::AcessoContext *ctx) {
    std::string obj = ctx->ID(0)->getText();
    int linha = ctx->getStart()->getLine();

    // acesso simples (sem ponto)
    if (ctx->ID().size() == 1) {
        if (!existeVariavel(obj)) {
            std::cerr << "ERRO: Linha " << linha << ": Variavel '" << obj << "' nao foi declarada.\n";
            return std::string("undefined");
        }

        return tabelaPorEscopo[escopoAtual].count(obj)
                ? tabelaPorEscopo[escopoAtual][obj].tipo
                : tabelaPorEscopo["start"][obj].tipo;
    }

    // Acesso com ponto: obj.atributo
    std::string atributo = ctx->ID(1)->getText();

    if (!atributoExiste(obj, atributo)) {
        std::cerr << "ERRO: Linha " << linha << ": Atributo '" << atributo
                  << "' nao pertence ao objeto '" << obj << "'.\n";
        return std::string("undefined");
    }

    // Retorna o tipo do atributo
    std::string tipoClasse = tabelaPorEscopo[escopoAtual].count(obj)
                             ? tabelaPorEscopo[escopoAtual][obj].tipo
                             : tabelaPorEscopo["start"][obj].tipo;

    return tabelaPorEscopo[tipoClasse][atributo].tipo;
}

antlrcpp::Any Visitor::visitComandoPrint(gramaticaParser::ComandoPrintContext *ctx) {
    ResultadoExpr resultado = visit(ctx->expressao()).as<ResultadoExpr>();

    std::cout << resultado.valor << std::endl;
    return nullptr;
}

antlrcpp::Any Visitor::visitComandoScan(gramaticaParser::ComandoScanContext *ctx) {
    std::string nome = ctx->acesso()->getText();
    int linha = ctx->getStart()->getLine();

    std::string tipoVar;
    Simbolo* simbolo = nullptr;

    // acesso a atributo de objeto (ex: obj.atributo)
    if (nome.find('.') != std::string::npos) {
        auto ponto = nome.find('.');
        std::string obj = nome.substr(0, ponto);
        std::string atributo = nome.substr(ponto + 1);

        if (!atributoExiste(obj, atributo)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Atributo '" << atributo
                      << "' nao pertence ao objeto '" << obj << "'.\n";
            return nullptr;
        }

        simbolo = &tabelaPorEscopo[obj][atributo];
        tipoVar = simbolo->tipo;
    } else {
        // variavel simples
        if (!existeVariavel(nome)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Variavel '" << nome
                      << "' nao foi declarada.\n";
            return nullptr;
        }

        simbolo = tabelaPorEscopo[escopoAtual].count(nome)
                    ? &tabelaPorEscopo[escopoAtual][nome]
                    : &tabelaPorEscopo["start"][nome];
        tipoVar = simbolo->tipo;
    }

    // leitura da entrada do usuário
    std::string valorLido;
    std::cout << ">> ";
    std::getline(std::cin, valorLido);

    // validacao de tipo
    if (tipoVar == "int" || tipoVar == "float") {
        if (!ehNumero(valorLido)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Valor digitado nao e um numero valido para '" << tipoVar << "'.\n";
            return nullptr;
        }
    } else if (tipoVar == "char") {
        if (valorLido.length() != 1) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Esperado um unico caractere para tipo 'char'.\n";
            return nullptr;
        }
    }

    simbolo->valor = valorLido;
    simbolo->inicializado = true;

    return nullptr;
}


//---------------------------------AUXILIARES------------------------------------------------
bool Visitor::existeVariavel(const std::string& nome) {
    return tabelaPorEscopo[escopoAtual].count(nome) || tabelaPorEscopo["start"].count(nome);
}

ResultadoExpr Visitor::acessarVariavel(const std::string& nome) {
    if (tabelaPorEscopo[escopoAtual].count(nome)) {
        Simbolo s = tabelaPorEscopo[escopoAtual][nome];
        return ResultadoExpr{s.tipo, s.valor};
    } else if (tabelaPorEscopo["start"].count(nome)) {
        Simbolo s = tabelaPorEscopo["start"][nome];
        return ResultadoExpr{s.tipo, s.valor};
    } else {
        return ResultadoExpr{"undefined", ""};
    }
}

bool Visitor::ehNumero(const std::string& str) {
    std::istringstream iss(str);
    double d;
    char c;
    return iss >> d && !(iss >> c);
}

bool Visitor::atributoExiste(const std::string& obj, const std::string& atributo) {
    if (!existeVariavel(obj)) return false;

    // Obtém o tipo do objeto a partir do escopo atual ou do escopo global
    std::string tipo;
    if (tabelaPorEscopo[escopoAtual].count(obj)) {
        tipo = tabelaPorEscopo[escopoAtual][obj].tipo;
    } else if (tabelaPorEscopo["start"].count(obj)) {
        tipo = tabelaPorEscopo["start"][obj].tipo;
    } else {
        return false;
    }

    // Verifica se a classe está registrada
    if (!tabelaPorEscopo.count(tipo)) return false;

    // Verifica se o atributo pertence à definição da classe
    return tabelaPorEscopo[tipo].count(atributo);
}


void Visitor::imprimirTabela() {
    std::cout << "\nTabela de Simbolos:\n";
    for (const auto& [escopo, simbolos] : tabelaPorEscopo) {
        for (const auto& [nome, simb] : simbolos) {
            std::cout << " - " << nome
                      << " | tipo: " << simb.tipo
                      << " | escopo: " << simb.escopo
                      << " | linha: " << simb.linha
                      << " | valor: " << simb.valor
                      << "\n";
        }
    }
}