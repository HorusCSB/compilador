
// Generated from gramatica.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "gramaticaParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by gramaticaParser.
 */
class  gramaticaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by gramaticaParser.
   */
    virtual std::any visitPrograma(gramaticaParser::ProgramaContext *context) = 0;

    virtual std::any visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *context) = 0;

    virtual std::any visitCorpoClasse(gramaticaParser::CorpoClasseContext *context) = 0;

    virtual std::any visitBlocoStart(gramaticaParser::BlocoStartContext *context) = 0;

    virtual std::any visitBloco(gramaticaParser::BlocoContext *context) = 0;

    virtual std::any visitComando(gramaticaParser::ComandoContext *context) = 0;

    virtual std::any visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *context) = 0;

    virtual std::any visitAtribuicao(gramaticaParser::AtribuicaoContext *context) = 0;

    virtual std::any visitEstruturaWhile(gramaticaParser::EstruturaWhileContext *context) = 0;

    virtual std::any visitEstruturaIf(gramaticaParser::EstruturaIfContext *context) = 0;

    virtual std::any visitEstruturaElsif(gramaticaParser::EstruturaElsifContext *context) = 0;

    virtual std::any visitEstruturaElse(gramaticaParser::EstruturaElseContext *context) = 0;

    virtual std::any visitCondicao(gramaticaParser::CondicaoContext *context) = 0;

    virtual std::any visitCondicaoAnd(gramaticaParser::CondicaoAndContext *context) = 0;

    virtual std::any visitCondicaoNot(gramaticaParser::CondicaoNotContext *context) = 0;

    virtual std::any visitCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext *context) = 0;

    virtual std::any visitOperadorComparacao(gramaticaParser::OperadorComparacaoContext *context) = 0;

    virtual std::any visitNovaInstancia(gramaticaParser::NovaInstanciaContext *context) = 0;

    virtual std::any visitExpressao(gramaticaParser::ExpressaoContext *context) = 0;

    virtual std::any visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *context) = 0;

    virtual std::any visitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *context) = 0;

    virtual std::any visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *context) = 0;

    virtual std::any visitComandoPrint(gramaticaParser::ComandoPrintContext *context) = 0;

    virtual std::any visitComandoScan(gramaticaParser::ComandoScanContext *context) = 0;

    virtual std::any visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *context) = 0;

    virtual std::any visitParametros(gramaticaParser::ParametrosContext *context) = 0;

    virtual std::any visitParametro(gramaticaParser::ParametroContext *context) = 0;

    virtual std::any visitBlocoFuncao(gramaticaParser::BlocoFuncaoContext *context) = 0;

    virtual std::any visitComandoRetorno(gramaticaParser::ComandoRetornoContext *context) = 0;

    virtual std::any visitChamadaFuncao(gramaticaParser::ChamadaFuncaoContext *context) = 0;

    virtual std::any visitArgumentos(gramaticaParser::ArgumentosContext *context) = 0;

    virtual std::any visitAcesso(gramaticaParser::AcessoContext *context) = 0;

    virtual std::any visitTipo(gramaticaParser::TipoContext *context) = 0;


};

