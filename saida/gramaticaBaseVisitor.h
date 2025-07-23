
// Generated from gramatica.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "gramaticaVisitor.h"


/**
 * This class provides an empty implementation of gramaticaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  gramaticaBaseVisitor : public gramaticaVisitor {
public:

  virtual std::any visitPrograma(gramaticaParser::ProgramaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCorpoClasse(gramaticaParser::CorpoClasseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlocoStart(gramaticaParser::BlocoStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBloco(gramaticaParser::BlocoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComando(gramaticaParser::ComandoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEstruturaWhile(gramaticaParser::EstruturaWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEstruturaIf(gramaticaParser::EstruturaIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEstruturaElsif(gramaticaParser::EstruturaElsifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEstruturaElse(gramaticaParser::EstruturaElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondicao(gramaticaParser::CondicaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondicaoAnd(gramaticaParser::CondicaoAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondicaoNot(gramaticaParser::CondicaoNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperadorComparacao(gramaticaParser::OperadorComparacaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNovaInstancia(gramaticaParser::NovaInstanciaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressao(gramaticaParser::ExpressaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComandoPrint(gramaticaParser::ComandoPrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComandoScan(gramaticaParser::ComandoScanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParametros(gramaticaParser::ParametrosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParametro(gramaticaParser::ParametroContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlocoFuncao(gramaticaParser::BlocoFuncaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComandoRetorno(gramaticaParser::ComandoRetornoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChamadaFuncao(gramaticaParser::ChamadaFuncaoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentos(gramaticaParser::ArgumentosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAcesso(gramaticaParser::AcessoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTipo(gramaticaParser::TipoContext *ctx) override {
    return visitChildren(ctx);
  }


};

