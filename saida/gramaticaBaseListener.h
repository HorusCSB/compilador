
// Generated from gramatica.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "gramaticaListener.h"


/**
 * This class provides an empty implementation of gramaticaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  gramaticaBaseListener : public gramaticaListener {
public:

  virtual void enterPrograma(gramaticaParser::ProgramaContext * /*ctx*/) override { }
  virtual void exitPrograma(gramaticaParser::ProgramaContext * /*ctx*/) override { }

  virtual void enterDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext * /*ctx*/) override { }
  virtual void exitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext * /*ctx*/) override { }

  virtual void enterCorpoClasse(gramaticaParser::CorpoClasseContext * /*ctx*/) override { }
  virtual void exitCorpoClasse(gramaticaParser::CorpoClasseContext * /*ctx*/) override { }

  virtual void enterBlocoStart(gramaticaParser::BlocoStartContext * /*ctx*/) override { }
  virtual void exitBlocoStart(gramaticaParser::BlocoStartContext * /*ctx*/) override { }

  virtual void enterBloco(gramaticaParser::BlocoContext * /*ctx*/) override { }
  virtual void exitBloco(gramaticaParser::BlocoContext * /*ctx*/) override { }

  virtual void enterComando(gramaticaParser::ComandoContext * /*ctx*/) override { }
  virtual void exitComando(gramaticaParser::ComandoContext * /*ctx*/) override { }

  virtual void enterDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext * /*ctx*/) override { }
  virtual void exitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext * /*ctx*/) override { }

  virtual void enterAtribuicao(gramaticaParser::AtribuicaoContext * /*ctx*/) override { }
  virtual void exitAtribuicao(gramaticaParser::AtribuicaoContext * /*ctx*/) override { }

  virtual void enterEstruturaWhile(gramaticaParser::EstruturaWhileContext * /*ctx*/) override { }
  virtual void exitEstruturaWhile(gramaticaParser::EstruturaWhileContext * /*ctx*/) override { }

  virtual void enterEstruturaIf(gramaticaParser::EstruturaIfContext * /*ctx*/) override { }
  virtual void exitEstruturaIf(gramaticaParser::EstruturaIfContext * /*ctx*/) override { }

  virtual void enterEstruturaElsif(gramaticaParser::EstruturaElsifContext * /*ctx*/) override { }
  virtual void exitEstruturaElsif(gramaticaParser::EstruturaElsifContext * /*ctx*/) override { }

  virtual void enterEstruturaElse(gramaticaParser::EstruturaElseContext * /*ctx*/) override { }
  virtual void exitEstruturaElse(gramaticaParser::EstruturaElseContext * /*ctx*/) override { }

  virtual void enterCondicao(gramaticaParser::CondicaoContext * /*ctx*/) override { }
  virtual void exitCondicao(gramaticaParser::CondicaoContext * /*ctx*/) override { }

  virtual void enterCondicaoAnd(gramaticaParser::CondicaoAndContext * /*ctx*/) override { }
  virtual void exitCondicaoAnd(gramaticaParser::CondicaoAndContext * /*ctx*/) override { }

  virtual void enterCondicaoNot(gramaticaParser::CondicaoNotContext * /*ctx*/) override { }
  virtual void exitCondicaoNot(gramaticaParser::CondicaoNotContext * /*ctx*/) override { }

  virtual void enterCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext * /*ctx*/) override { }
  virtual void exitCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext * /*ctx*/) override { }

  virtual void enterOperadorComparacao(gramaticaParser::OperadorComparacaoContext * /*ctx*/) override { }
  virtual void exitOperadorComparacao(gramaticaParser::OperadorComparacaoContext * /*ctx*/) override { }

  virtual void enterNovaInstancia(gramaticaParser::NovaInstanciaContext * /*ctx*/) override { }
  virtual void exitNovaInstancia(gramaticaParser::NovaInstanciaContext * /*ctx*/) override { }

  virtual void enterExpressao(gramaticaParser::ExpressaoContext * /*ctx*/) override { }
  virtual void exitExpressao(gramaticaParser::ExpressaoContext * /*ctx*/) override { }

  virtual void enterExpressaoSoma(gramaticaParser::ExpressaoSomaContext * /*ctx*/) override { }
  virtual void exitExpressaoSoma(gramaticaParser::ExpressaoSomaContext * /*ctx*/) override { }

  virtual void enterExpressaoProduto(gramaticaParser::ExpressaoProdutoContext * /*ctx*/) override { }
  virtual void exitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext * /*ctx*/) override { }

  virtual void enterExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext * /*ctx*/) override { }
  virtual void exitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext * /*ctx*/) override { }

  virtual void enterComandoPrint(gramaticaParser::ComandoPrintContext * /*ctx*/) override { }
  virtual void exitComandoPrint(gramaticaParser::ComandoPrintContext * /*ctx*/) override { }

  virtual void enterComandoScan(gramaticaParser::ComandoScanContext * /*ctx*/) override { }
  virtual void exitComandoScan(gramaticaParser::ComandoScanContext * /*ctx*/) override { }

  virtual void enterDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext * /*ctx*/) override { }
  virtual void exitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext * /*ctx*/) override { }

  virtual void enterParametros(gramaticaParser::ParametrosContext * /*ctx*/) override { }
  virtual void exitParametros(gramaticaParser::ParametrosContext * /*ctx*/) override { }

  virtual void enterParametro(gramaticaParser::ParametroContext * /*ctx*/) override { }
  virtual void exitParametro(gramaticaParser::ParametroContext * /*ctx*/) override { }

  virtual void enterBlocoFuncao(gramaticaParser::BlocoFuncaoContext * /*ctx*/) override { }
  virtual void exitBlocoFuncao(gramaticaParser::BlocoFuncaoContext * /*ctx*/) override { }

  virtual void enterComandoRetorno(gramaticaParser::ComandoRetornoContext * /*ctx*/) override { }
  virtual void exitComandoRetorno(gramaticaParser::ComandoRetornoContext * /*ctx*/) override { }

  virtual void enterChamadaFuncao(gramaticaParser::ChamadaFuncaoContext * /*ctx*/) override { }
  virtual void exitChamadaFuncao(gramaticaParser::ChamadaFuncaoContext * /*ctx*/) override { }

  virtual void enterArgumentos(gramaticaParser::ArgumentosContext * /*ctx*/) override { }
  virtual void exitArgumentos(gramaticaParser::ArgumentosContext * /*ctx*/) override { }

  virtual void enterAcesso(gramaticaParser::AcessoContext * /*ctx*/) override { }
  virtual void exitAcesso(gramaticaParser::AcessoContext * /*ctx*/) override { }

  virtual void enterTipo(gramaticaParser::TipoContext * /*ctx*/) override { }
  virtual void exitTipo(gramaticaParser::TipoContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

