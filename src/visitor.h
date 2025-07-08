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
    bool inicializado = false;
};

class MeuVisitor : public gramaticaBaseVisitor {
public:
    std::string escopoAtual = "global";
    std::map<std::string, std::map<std::string, Simbolo>> tabelaPorEscopo;

    antlrcpp::Any visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) override;
    antlrcpp::Any visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) override;
    antlrcpp::Any visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) override;
    antlrcpp::Any visitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) override;
    antlrcpp::Any visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) override;

    void imprimirTabela();
    bool existeVariavel(const std::string& nome);
    bool atributoExiste(const std::string& obj, const std::string& atributo);
};

#endif