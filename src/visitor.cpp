#include "visitor.h"

antlrcpp::Any MeuVisitor::visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) {
    escopoAtual = ctx->ID()->getText();
    visitChildren(ctx);
    escopoAtual = "global";
    return nullptr;
}

antlrcpp::Any MeuVisitor::visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) {
    escopoAtual = ctx->ID()->getText();
    visitChildren(ctx);
    escopoAtual = "global";
    return nullptr;
}

antlrcpp::Any MeuVisitor::visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) {
    std::string nome = ctx->ID()->getText();
    std::string tipo = ctx->tipo()->getText();
    int linha = ctx->getStart()->getLine();

    Simbolo simb {nome, tipo, escopoAtual, linha};
    tabela[nome] = simb;

    return visitChildren(ctx);
}

void MeuVisitor::imprimirTabela() {
    std::cout << "Tabela de Símbolos:\n";
    for (const auto& [nome, simb] : tabela) {
        std::cout << " - " << nome
                  << " | tipo: " << simb.tipo
                  << " | escopo: " << simb.escopo
                  << " | linha: " << simb.linha
                  << "\n";
    }
}