#ifndef VISITOR_H
#define VISITOR_H

#include "saida/gramaticaBaseVisitor.h"
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>

struct Simbolo {
    std::string nome;
    std::string tipo;
    std::string escopo;
    int linha;
    bool inicializado = false;
    std::string valor = "";
};

struct ResultadoExpr {
    std::string tipo;
    std::string valor;

    ResultadoExpr(std::string t = "undefined", std::string v = "") : tipo(t), valor(v) {}
};

class Visitor : public gramaticaBaseVisitor {
public:
    std::string escopoAtual = "global";
    std::ostringstream llvmSaida;
    std::map<std::string, std::map<std::string, Simbolo>> tabelaPorEscopo;
    std::unordered_map<std::string, std::vector<std::string>> parametrosFuncao;
    std::string tipoFuncaoAtual;
    std::set<std::string> variaveisLLVMGeradas;

    antlrcpp::Any visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) override;
    antlrcpp::Any visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) override;
    antlrcpp::Any visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) override;
    antlrcpp::Any visitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) override;
    antlrcpp::Any visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) override;
    antlrcpp::Any visitExpressao(gramaticaParser::ExpressaoContext *ctx) override;
    antlrcpp::Any visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) override;
    antlrcpp::Any visitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *ctx) override;
    antlrcpp::Any visitChamadaFuncao(gramaticaParser::ChamadaFuncaoContext *ctx) override;
    antlrcpp::Any visitComandoRetorno(gramaticaParser::ComandoRetornoContext *ctx) override;
    antlrcpp::Any visitAcesso(gramaticaParser::AcessoContext *ctx) override;
    antlrcpp::Any visitComandoPrint(gramaticaParser::ComandoPrintContext *ctx);
    antlrcpp::Any visitComandoScan(gramaticaParser::ComandoScanContext *ctx);
    antlrcpp::Any visitEstruturaIf(gramaticaParser::EstruturaIfContext *ctx) override;
    antlrcpp::Any visitEstruturaWhile(gramaticaParser::EstruturaWhileContext *ctx);
    antlrcpp::Any visitCondicao(gramaticaParser::CondicaoContext *ctx);
    antlrcpp::Any visitCondicaoAnd(gramaticaParser::CondicaoAndContext *ctx);
    antlrcpp::Any visitCondicaoNot(gramaticaParser::CondicaoNotContext *ctx);
    antlrcpp::Any visitCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext *ctx);

    void imprimirTabela();
    bool existeVariavel(const std::string& nome);
    ResultadoExpr acessarVariavel(const std::string& nome);
    bool ehNumero(const std::string& str);
    bool atributoExiste(const std::string& obj, const std::string& atributo);

private:
    std::set<std::pair<std::string, int>> chamadasJaAnalisadas;
    std::unordered_map<std::string, gramaticaParser::DeclaracaoFuncaoContext*> funcoesDeclaradas;
};

#endif