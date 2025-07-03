
// Generated from gramatica.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "gramaticaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by gramaticaParser.
 */
class  gramaticaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPrograma(gramaticaParser::ProgramaContext *ctx) = 0;
  virtual void exitPrograma(gramaticaParser::ProgramaContext *ctx) = 0;

  virtual void enterDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) = 0;
  virtual void exitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) = 0;

  virtual void enterCorpoClasse(gramaticaParser::CorpoClasseContext *ctx) = 0;
  virtual void exitCorpoClasse(gramaticaParser::CorpoClasseContext *ctx) = 0;

  virtual void enterBlocoStart(gramaticaParser::BlocoStartContext *ctx) = 0;
  virtual void exitBlocoStart(gramaticaParser::BlocoStartContext *ctx) = 0;

  virtual void enterBloco(gramaticaParser::BlocoContext *ctx) = 0;
  virtual void exitBloco(gramaticaParser::BlocoContext *ctx) = 0;

  virtual void enterComando(gramaticaParser::ComandoContext *ctx) = 0;
  virtual void exitComando(gramaticaParser::ComandoContext *ctx) = 0;

  virtual void enterDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) = 0;
  virtual void exitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) = 0;

  virtual void enterAtribuicao(gramaticaParser::AtribuicaoContext *ctx) = 0;
  virtual void exitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) = 0;

  virtual void enterEstruturaWhile(gramaticaParser::EstruturaWhileContext *ctx) = 0;
  virtual void exitEstruturaWhile(gramaticaParser::EstruturaWhileContext *ctx) = 0;

  virtual void enterEstruturaIf(gramaticaParser::EstruturaIfContext *ctx) = 0;
  virtual void exitEstruturaIf(gramaticaParser::EstruturaIfContext *ctx) = 0;

  virtual void enterEstruturaElsif(gramaticaParser::EstruturaElsifContext *ctx) = 0;
  virtual void exitEstruturaElsif(gramaticaParser::EstruturaElsifContext *ctx) = 0;

  virtual void enterEstruturaElse(gramaticaParser::EstruturaElseContext *ctx) = 0;
  virtual void exitEstruturaElse(gramaticaParser::EstruturaElseContext *ctx) = 0;

  virtual void enterCondicao(gramaticaParser::CondicaoContext *ctx) = 0;
  virtual void exitCondicao(gramaticaParser::CondicaoContext *ctx) = 0;

  virtual void enterCondicaoAnd(gramaticaParser::CondicaoAndContext *ctx) = 0;
  virtual void exitCondicaoAnd(gramaticaParser::CondicaoAndContext *ctx) = 0;

  virtual void enterCondicaoNot(gramaticaParser::CondicaoNotContext *ctx) = 0;
  virtual void exitCondicaoNot(gramaticaParser::CondicaoNotContext *ctx) = 0;

  virtual void enterCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext *ctx) = 0;
  virtual void exitCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext *ctx) = 0;

  virtual void enterOperadorComparacao(gramaticaParser::OperadorComparacaoContext *ctx) = 0;
  virtual void exitOperadorComparacao(gramaticaParser::OperadorComparacaoContext *ctx) = 0;

  virtual void enterNovaInstancia(gramaticaParser::NovaInstanciaContext *ctx) = 0;
  virtual void exitNovaInstancia(gramaticaParser::NovaInstanciaContext *ctx) = 0;

  virtual void enterExpressao(gramaticaParser::ExpressaoContext *ctx) = 0;
  virtual void exitExpressao(gramaticaParser::ExpressaoContext *ctx) = 0;

  virtual void enterExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) = 0;
  virtual void exitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *ctx) = 0;

  virtual void enterExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *ctx) = 0;
  virtual void exitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *ctx) = 0;

  virtual void enterExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) = 0;
  virtual void exitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) = 0;

  virtual void enterComandoPrint(gramaticaParser::ComandoPrintContext *ctx) = 0;
  virtual void exitComandoPrint(gramaticaParser::ComandoPrintContext *ctx) = 0;

  virtual void enterComandoScan(gramaticaParser::ComandoScanContext *ctx) = 0;
  virtual void exitComandoScan(gramaticaParser::ComandoScanContext *ctx) = 0;

  virtual void enterDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) = 0;
  virtual void exitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) = 0;

  virtual void enterParametros(gramaticaParser::ParametrosContext *ctx) = 0;
  virtual void exitParametros(gramaticaParser::ParametrosContext *ctx) = 0;

  virtual void enterParametro(gramaticaParser::ParametroContext *ctx) = 0;
  virtual void exitParametro(gramaticaParser::ParametroContext *ctx) = 0;

  virtual void enterBlocoFuncao(gramaticaParser::BlocoFuncaoContext *ctx) = 0;
  virtual void exitBlocoFuncao(gramaticaParser::BlocoFuncaoContext *ctx) = 0;

  virtual void enterComandoRetorno(gramaticaParser::ComandoRetornoContext *ctx) = 0;
  virtual void exitComandoRetorno(gramaticaParser::ComandoRetornoContext *ctx) = 0;

  virtual void enterChamadaFuncao(gramaticaParser::ChamadaFuncaoContext *ctx) = 0;
  virtual void exitChamadaFuncao(gramaticaParser::ChamadaFuncaoContext *ctx) = 0;

  virtual void enterArgumentos(gramaticaParser::ArgumentosContext *ctx) = 0;
  virtual void exitArgumentos(gramaticaParser::ArgumentosContext *ctx) = 0;

  virtual void enterAcesso(gramaticaParser::AcessoContext *ctx) = 0;
  virtual void exitAcesso(gramaticaParser::AcessoContext *ctx) = 0;

  virtual void enterTipo(gramaticaParser::TipoContext *ctx) = 0;
  virtual void exitTipo(gramaticaParser::TipoContext *ctx) = 0;


};

