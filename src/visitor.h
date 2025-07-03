#ifndef VISITOR_H
#define VISITOR_H

#include "../saida/gramaticaBaseVisitor.h"
#include <unordered_map>
#include <string>
#include <iostream>

struct Simbolo {
    std::string nome;
    std::string tipo;
    std::string escopo;
    int linha;
};

class MeuVisitor : public gramaticaBaseVisitor {
public:
    std::string escopoAtual = "global";
    std::unordered_map<std::string, Simbolo> tabela;

    virtual antlrcpp::Any visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) override;
    virtual antlrcpp::Any visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) override;
    virtual antlrcpp::Any visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) override;

    void imprimirTabela();
};

#endif