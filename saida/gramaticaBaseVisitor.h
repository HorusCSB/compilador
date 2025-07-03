
// Generated from gramatica.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "gramaticaVisitor.h"
#include "gramaticaParser.h"


/**
 * This class provides an empty implementation of gramaticaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  gramaticaBaseVisitor : public gramaticaVisitor {
public:

  virtual antlrcpp::Any visitPrograma(gramaticaParser::ProgramaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCorpoClasse(gramaticaParser::CorpoClasseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlocoStart(gramaticaParser::BlocoStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloco(gramaticaParser::BlocoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComando(gramaticaParser::ComandoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEstruturaWhile(gramaticaParser::EstruturaWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEstruturaIf(gramaticaParser::EstruturaIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEstruturaElsif(gramaticaParser::EstruturaElsifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEstruturaElse(gramaticaParser::EstruturaElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondicao(gramaticaParser::CondicaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondicaoAnd(gramaticaParser::CondicaoAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondicaoNot(gramaticaParser::CondicaoNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperadorComparacao(gramaticaParser::OperadorComparacaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNovaInstancia(gramaticaParser::NovaInstanciaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressao(gramaticaParser::ExpressaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComandoPrint(gramaticaParser::ComandoPrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComandoScan(gramaticaParser::ComandoScanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametros(gramaticaParser::ParametrosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametro(gramaticaParser::ParametroContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlocoFuncao(gramaticaParser::BlocoFuncaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComandoRetorno(gramaticaParser::ComandoRetornoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChamadaFuncao(gramaticaParser::ChamadaFuncaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentos(gramaticaParser::ArgumentosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAcesso(gramaticaParser::AcessoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTipo(gramaticaParser::TipoContext *ctx) override {
    return visitChildren(ctx);
  }


};

