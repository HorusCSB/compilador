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

            Simbolo simboloParam {nomeParam, tipoParam, escopoAtual, linhaParam};
            tabelaPorEscopo[escopoAtual][nomeParam] = simboloParam;
        }
    }

    // visita corpo da função
    visitChildren(ctx);

    // restaura escopo start
    escopoAtual = "start";

    return nullptr;
}

antlrcpp::Any Visitor::visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) {
    std::string nome = ctx->ID()->getText();
    std::string tipo = ctx->tipo()->getText();
    int linha = ctx->getStart()->getLine();

    // tipos primitivos permitidos
    std::set<std::string> tiposPrimitivos = {"int", "float", "char", "string"};

    // verifica se tipo é algum tipo nao existente
    if (!tiposPrimitivos.count(tipo) && !tabelaPorEscopo["start"].count(tipo)) {
        std::cerr << "ERRO: Linha " << linha
                << ": Tipo '" << tipo << "' nao declarado (classe inexistente?)\n";
        return nullptr;
    }

    // verifica duplicacao
    if (tabelaPorEscopo[escopoAtual].count(nome)) {
        std::cerr << "ERRO: Linha " << linha
              << ": Variavel '" << nome
              << "' ja declarada no escopo '" << escopoAtual << "'.\n";
        return nullptr;
    } else {
        //avalia a expressao
        if (ctx->expressao()) {
            antlrcpp::Any anyTipo = visit(ctx->expressao());
            std::string tipoExpr = anyTipo.is<std::string>() ? anyTipo.as<std::string>() : "undefined";

            if (tipoExpr != "undefined" && tipo != tipoExpr) {
                std::cerr << "ERRO: Linha " << linha
                        << " Voce nao pode atribuir um tipo '" << tipoExpr
                        << "' a variavel '" << nome
                        << "' de tipo '" << tipo << "'.\n";
                return nullptr;
            }
        }

        //so adiciona na tabela de simbolos apos passar por todas as verificacoes
        Simbolo simb {nome, tipo, escopoAtual, linha};
        tabelaPorEscopo[escopoAtual][nome] = simb;

    }

    return visitChildren(ctx);
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
    return visit(ctx->expressaoSoma());
}

antlrcpp::Any Visitor::visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) {
    if (ctx->NUM_INT()) {
        return std::string("int");
    }

    if (ctx->NUM_FLOAT()) {
        return std::string("float");
    }

    if (ctx->STRING()) {
        return std::string("string");
    }

    if (ctx->CHAR()) {
        return std::string("char");
    }

    if (ctx->chamadaFuncao()) {
        return visit(ctx->chamadaFuncao());
    }

    if (ctx->acesso()) {
        return visit(ctx->acesso());
    }

    if (ctx->expressao()) {
        return visit(ctx->expressao());
    }

    if (ctx->ID()) {
        std::string nomeVar = ctx->ID()->getText();
        int linha = ctx->getStart()->getLine();

        if (!existeVariavel(nomeVar)) {
            std::cerr << "ERRO: Linha " << linha
                    << ": Variavel '" << nomeVar << "' nao foi declarada." << std::endl;
            return std::string("undefined");
        }

        // Busca o tipo da variável: primeiro no escopo atual, depois no start
        std::string tipoVar = tabelaPorEscopo[escopoAtual].count(nomeVar)
                                ? tabelaPorEscopo[escopoAtual][nomeVar].tipo
                                : tabelaPorEscopo["start"][nomeVar].tipo;

        return tipoVar;
    }

    return std::string("undefined");
}


antlrcpp::Any Visitor::visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) {
    antlrcpp::Any anyTipoEsq = visit(ctx->expressaoProduto(0));
    std::string tipoEsquerda = anyTipoEsq.is<std::string>() ? anyTipoEsq.as<std::string>() : "undefined";

    for (size_t i = 1; i < ctx->expressaoProduto().size(); ++i) {
        //std::string tipoDireita = visit(ctx->expressaoProduto(i));
        antlrcpp::Any anyTipoDir = visit(ctx->expressaoProduto(i));
        std::string tipoDireita = anyTipoDir.is<std::string>() ? anyTipoDir.as<std::string>() : "undefined";


        if (tipoEsquerda == "int" && tipoDireita == "float" ||
            tipoEsquerda == "float" && tipoDireita == "int" ||
            tipoEsquerda == "float" && tipoDireita == "float") {
            tipoEsquerda = "float"; // promoção
        } else if (tipoEsquerda != tipoDireita) {
            tipoEsquerda = "undefined"; // erro de tipo
        }
    }

    return tipoEsquerda;
}

antlrcpp::Any Visitor::visitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *ctx) {
    antlrcpp::Any anyTipoEsq = visit(ctx->expressaoPrimaria(0));
    std::string tipoEsquerda = anyTipoEsq.is<std::string>() ? anyTipoEsq.as<std::string>() : "undefined";

    for (size_t i = 1; i < ctx->expressaoPrimaria().size(); ++i) {
        antlrcpp::Any anyTipoDir = visit(ctx->expressaoPrimaria(i));
        std::string tipoDireita = anyTipoDir.is<std::string>() ? anyTipoDir.as<std::string>() : "undefined";
        if (tipoEsquerda == "int" && tipoDireita == "float" ||
            tipoEsquerda == "float" && tipoDireita == "int" ||
            tipoEsquerda == "float" && tipoDireita == "float") {
            tipoEsquerda = "float";
        } else if (tipoEsquerda != tipoDireita) {
            tipoEsquerda = "undefined";
        }
    }

    return tipoEsquerda;
}


//AUXILIARES
bool Visitor::existeVariavel(const std::string& nome) {
    return tabelaPorEscopo[escopoAtual].count(nome) || tabelaPorEscopo["start"].count(nome);
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
                      << "\n";
        }
    }
}