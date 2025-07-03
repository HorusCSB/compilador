
// Generated from gramatica.g4 by ANTLR 4.9.1

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
    virtual antlrcpp::Any visitPrograma(gramaticaParser::ProgramaContext *context) = 0;

    virtual antlrcpp::Any visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *context) = 0;

    virtual antlrcpp::Any visitCorpoClasse(gramaticaParser::CorpoClasseContext *context) = 0;

    virtual antlrcpp::Any visitBlocoStart(gramaticaParser::BlocoStartContext *context) = 0;

    virtual antlrcpp::Any visitBloco(gramaticaParser::BlocoContext *context) = 0;

    virtual antlrcpp::Any visitComando(gramaticaParser::ComandoContext *context) = 0;

    virtual antlrcpp::Any visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *context) = 0;

    virtual antlrcpp::Any visitAtribuicao(gramaticaParser::AtribuicaoContext *context) = 0;

    virtual antlrcpp::Any visitEstruturaWhile(gramaticaParser::EstruturaWhileContext *context) = 0;

    virtual antlrcpp::Any visitEstruturaIf(gramaticaParser::EstruturaIfContext *context) = 0;

    virtual antlrcpp::Any visitEstruturaElsif(gramaticaParser::EstruturaElsifContext *context) = 0;

    virtual antlrcpp::Any visitEstruturaElse(gramaticaParser::EstruturaElseContext *context) = 0;

    virtual antlrcpp::Any visitCondicao(gramaticaParser::CondicaoContext *context) = 0;

    virtual antlrcpp::Any visitCondicaoAnd(gramaticaParser::CondicaoAndContext *context) = 0;

    virtual antlrcpp::Any visitCondicaoNot(gramaticaParser::CondicaoNotContext *context) = 0;

    virtual antlrcpp::Any visitCondicaoPrimaria(gramaticaParser::CondicaoPrimariaContext *context) = 0;

    virtual antlrcpp::Any visitOperadorComparacao(gramaticaParser::OperadorComparacaoContext *context) = 0;

    virtual antlrcpp::Any visitNovaInstancia(gramaticaParser::NovaInstanciaContext *context) = 0;

    virtual antlrcpp::Any visitExpressao(gramaticaParser::ExpressaoContext *context) = 0;

    virtual antlrcpp::Any visitExpressaoSoma(gramaticaParser::ExpressaoSomaContext *context) = 0;

    virtual antlrcpp::Any visitExpressaoProduto(gramaticaParser::ExpressaoProdutoContext *context) = 0;

    virtual antlrcpp::Any visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *context) = 0;

    virtual antlrcpp::Any visitComandoPrint(gramaticaParser::ComandoPrintContext *context) = 0;

    virtual antlrcpp::Any visitComandoScan(gramaticaParser::ComandoScanContext *context) = 0;

    virtual antlrcpp::Any visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *context) = 0;

    virtual antlrcpp::Any visitParametros(gramaticaParser::ParametrosContext *context) = 0;

    virtual antlrcpp::Any visitParametro(gramaticaParser::ParametroContext *context) = 0;

    virtual antlrcpp::Any visitBlocoFuncao(gramaticaParser::BlocoFuncaoContext *context) = 0;

    virtual antlrcpp::Any visitComandoRetorno(gramaticaParser::ComandoRetornoContext *context) = 0;

    virtual antlrcpp::Any visitChamadaFuncao(gramaticaParser::ChamadaFuncaoContext *context) = 0;

    virtual antlrcpp::Any visitArgumentos(gramaticaParser::ArgumentosContext *context) = 0;

    virtual antlrcpp::Any visitAcesso(gramaticaParser::AcessoContext *context) = 0;

    virtual antlrcpp::Any visitTipo(gramaticaParser::TipoContext *context) = 0;


};

