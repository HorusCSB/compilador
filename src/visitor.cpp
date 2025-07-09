#include "visitor.h"

/*
TODO:     int resultado = somar(3, 4);
nao esta entendendo a func somar como um int
*/

antlrcpp::Any MeuVisitor::visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) {
    escopoAtual = ctx->ID()->getText();
    visitChildren(ctx);
    escopoAtual = "global";
    return nullptr;
}

antlrcpp::Any MeuVisitor::visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) {
    std::string nomeFuncao = ctx->ID()->getText();
    std::string tipoRetorno = ctx->tipo()->getText();
    int linha = ctx->getStart()->getLine();

    // adiciona a função na tabela de símbolos (escopo global)
    Simbolo simboloFuncao{nomeFuncao, tipoRetorno, "global", linha};
    tabelaPorEscopo["global"][nomeFuncao] = simboloFuncao;

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

    // restaura escopo global
    escopoAtual = "global";

    return nullptr;
}

antlrcpp::Any MeuVisitor::visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) {
    std::string nome = ctx->ID()->getText();
    std::string tipo = ctx->tipo()->getText();
    int linha = ctx->getStart()->getLine();

    // verifica duplicacao
    if (tabelaPorEscopo[escopoAtual].count(nome)) {
    std::cerr << "ERRO: Linha " << linha
              << ": Variavel '" << nome
              << "' ja declarada no escopo '" << escopoAtual << "'.\n";
    } else {
        // insere primeiro na tabela de simbolos antes de ir pra proxima verificacao
        Simbolo simb {nome, tipo, escopoAtual, linha};
        tabelaPorEscopo[escopoAtual][nome] = simb;

        // depois avalia a expressao
        if (ctx->expressao()) {
            antlrcpp::Any anyTipo = visit(ctx->expressao());
            std::string tipoExpr = anyTipo.is<std::string>() ? anyTipo.as<std::string>() : "undefined";

            if (tipoExpr != "undefined" && tipo != tipoExpr) {
                std::cerr << "ERRO: Linha " << linha
                        << " Voce nao pode atribuir um tipo '" << tipoExpr
                        << "' a variavel '" << nome
                        << "' de tipo '" << tipo << "'.\n";
            }
        }
    }

    return visitChildren(ctx);
}

antlrcpp::Any MeuVisitor::visitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) {
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
                        : tabelaPorEscopo["global"][acesso].tipo;
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

antlrcpp::Any MeuVisitor::visitExpressao(gramaticaParser::ExpressaoContext *ctx) {
    return visit(ctx->expressaoSoma());
}

antlrcpp::Any MeuVisitor::visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) {
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

        // Busca o tipo da variável: primeiro no escopo atual, depois no global
        std::string tipoVar = tabelaPorEscopo[escopoAtual].count(nomeVar)
                                ? tabelaPorEscopo[escopoAtual][nomeVar].tipo
                                : tabelaPorEscopo["global"][nomeVar].tipo;

        return tipoVar;
    }

    return std::string("undefined");
}


antlrcpp::Any MeuVisitor::visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) {
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

antlrcpp::Any MeuVisitor::visitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *ctx) {
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
bool MeuVisitor::existeVariavel(const std::string& nome) {
    return tabelaPorEscopo[escopoAtual].count(nome) || tabelaPorEscopo["global"].count(nome);
}

bool MeuVisitor::atributoExiste(const std::string& obj, const std::string& atributo) {
    if (!existeVariavel(obj)) return false;
    std::string tipo = tabelaPorEscopo[escopoAtual][obj].tipo;
    return tabelaPorEscopo[tipo].count(atributo);
}

void MeuVisitor::imprimirTabela() {
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