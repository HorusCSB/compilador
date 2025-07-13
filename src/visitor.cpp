#include "visitor.h"

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

    // Verifica se o tipo é válido (primitivo ou classe declarada)
    if (!tiposPrimitivos.count(tipo) && !tabelaPorEscopo["start"].count(tipo)) {
        std::cerr << "ERRO: Linha " << linha
                  << ": Tipo '" << tipo << "' nao declarado (classe inexistente?)\n";
        return nullptr;
    }

    // Verifica duplicação
    if (tabelaPorEscopo[escopoAtual].count(nome)) {
        std::cerr << "ERRO: Linha " << linha
                  << ": Variavel '" << nome
                  << "' ja declarada no escopo '" << escopoAtual << "'.\n";
        return nullptr;
    }

    // Avalia a expressão (se houver)
    Simbolo simb {nome, tipo, escopoAtual, linha, false, ""};

    if (ctx->expressao()) {
        ResultadoExpr resultado = visit(ctx->expressao()).as<ResultadoExpr>();

        if (resultado.tipo != "undefined" && resultado.tipo != tipo) {
            std::cerr << "ERRO: Linha " << linha
                    << ": Voce nao pode atribuir um tipo '" << resultado.tipo
                    << "' a variavel '" << nome
                    << "' de tipo '" << tipo << "'.\n";
            return nullptr;
        }

        simb.inicializado = true;
        simb.valor = resultado.valor;
        //std::cout << "DEBUG: Resultado da expressao atribuida a '" << nome << "' = " << resultado.tipo << " " << resultado.valor << "\n";

    }

    // Adiciona símbolo à tabela
    tabelaPorEscopo[escopoAtual][nome] = simb;
    return nullptr;
}


antlrcpp::Any Visitor::visitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) {
    std::string acesso = ctx->acesso()->getText();
    int linha = ctx->getStart()->getLine();
    std::string tipoVar;

    if (acesso.find('.') != std::string::npos) {
        auto ponto = acesso.find('.');
        std::string obj = acesso.substr(0, ponto);
        std::string atributo = acesso.substr(ponto+1);

        if (!atributoExiste(obj, atributo)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Atributo '" << atributo
                      << "' nao pertence ao objeto '" << obj << "'.\n";
        } else {
            std::string tipoClasse = tabelaPorEscopo[escopoAtual][obj].tipo;
            tipoVar = tabelaPorEscopo[tipoClasse][atributo].tipo;
        }
    } else {
        if (!existeVariavel(acesso)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Variavel '" << acesso
                      << "' usada sem estar declarada.\n";
        } else {
            tipoVar = tabelaPorEscopo[escopoAtual].count(acesso)
                        ? tabelaPorEscopo[escopoAtual][acesso].tipo
                        : tabelaPorEscopo["start"][acesso].tipo;
        }
    }

    // Verifica tipo da expressão
    antlrcpp::Any anyTipo = visit(ctx->expressao());
    std::string tipoExpr = anyTipo.is<std::string>() ? anyTipo.as<std::string>() : "undefined";

    if (!tipoVar.empty() && tipoVar != tipoExpr && tipoExpr != "undefined") {
        std::cerr << "ERRO: Linha " << linha
                  << "Voce nao pode atribuir um tipo '" << tipoExpr
                  << "' a variavel '" << acesso
                  << "' de tipo '" << tipoVar << "'.\n";
    }

    return nullptr;
}

antlrcpp::Any Visitor::visitExpressao(gramaticaParser::ExpressaoContext *ctx) {
    return visit(ctx->expressaoSoma()).as<ResultadoExpr>();
}

antlrcpp::Any Visitor::visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) {
    if (ctx->NUM_INT()) {
        return ResultadoExpr("int", ctx->getText());
    }

    if (ctx->NUM_FLOAT()) {
        return ResultadoExpr("float", ctx->getText());
    }

    if (ctx->STRING()) {
        std::string raw = ctx->getText();
        return ResultadoExpr("string", raw.substr(1, raw.size() - 2));
    }

    if (ctx->CHAR()) {
        std::string raw = ctx->getText();
        return ResultadoExpr("char", raw.substr(1, raw.size() - 2));
    }

    if (ctx->chamadaFuncao()) {
        return visit(ctx->chamadaFuncao()).as<ResultadoExpr>();
    }

    if (ctx->ID()) {
        std::string nomeVar = ctx->ID()->getText();
        int linha = ctx->getStart()->getLine();

        if (!existeVariavel(nomeVar)) {
            std::cerr << "ERRO: Linha " << linha
                    << ": Variavel '" << nomeVar << "' nao foi declarada." << std::endl;
            return ResultadoExpr("undefined", "");
        }

        Simbolo simb = tabelaPorEscopo[escopoAtual].count(nomeVar)
                    ? tabelaPorEscopo[escopoAtual][nomeVar]
                    : tabelaPorEscopo["start"][nomeVar];

        if (!simb.inicializado) {
            std::cerr << "ERRO: Linha " << linha
                    << ": Variavel '" << nomeVar << "' usada sem estar inicializada." << std::endl;
            return ResultadoExpr(simb.tipo, "");
        }

        return ResultadoExpr(simb.tipo, simb.valor);
    }


    if (ctx->expressao()) {
        return visit(ctx->expressao()).as<ResultadoExpr>();
    }

    return ResultadoExpr();
}

antlrcpp::Any Visitor::visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) {
    ResultadoExpr resultado = visit(ctx->expressaoProduto(0)).as<ResultadoExpr>();

    for (size_t i = 1; i < ctx->expressaoProduto().size(); ++i) {
        std::string op;
        if (ctx->SOMA(i - 1)) op = "+";
        else if (ctx->SUBTRACAO(i - 1)) op = "-";
        else op = "?";

        ResultadoExpr direito = visit(ctx->expressaoProduto(i)).as<ResultadoExpr>();

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
            double valFinal;

            if (op == "+") valFinal = valEsq + valDir;
            else if (op == "-") valFinal = valEsq - valDir;
            else valFinal = 0;  // Operador inválido

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


//---------------------------------AUXILIARES------------------------------------------------
bool Visitor::existeVariavel(const std::string& nome) {
    return tabelaPorEscopo[escopoAtual].count(nome) || tabelaPorEscopo["start"].count(nome);
}

bool Visitor::ehNumero(const std::string& str) {
    std::istringstream iss(str);
    double d;
    char c;
    return iss >> d && !(iss >> c);
}

bool Visitor::atributoExiste(const std::string& obj, const std::string& atributo) {
    if (!existeVariavel(obj)) return false;
    std::string tipo = tabelaPorEscopo[escopoAtual][obj].tipo;
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