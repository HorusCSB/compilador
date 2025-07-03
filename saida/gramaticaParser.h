
// Generated from gramatica.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  gramaticaParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, START = 2, NUM_INT = 3, NUM_FLOAT = 4, STRING = 5, CHAR = 6, 
    L_CHAVE = 7, R_CHAVE = 8, L_PARENTESE = 9, R_PARENTESE = 10, VIRGULA = 11, 
    PONTOV = 12, AND = 13, OR = 14, NOT = 15, IGUAL = 16, DIFF = 17, MENOR = 18, 
    MAIOR = 19, MAIOR_IGUAL = 20, MENOR_IGUAL = 21, SOMA = 22, SUBTRACAO = 23, 
    MULTIPLICACAO = 24, DIVISAO = 25, RECEBA = 26, IF = 27, ELSE = 28, WHILE = 29, 
    RETURN = 30, NEW = 31, TK_INT = 32, TK_FLOAT = 33, TK_STRING = 34, TK_CHAR = 35, 
    CLASS = 36, PRINT = 37, SCAN = 38, ID = 39, ESPACO = 40, COMENTARIO = 41
  };

  enum {
    RulePrograma = 0, RuleDeclaracaoClasse = 1, RuleCorpoClasse = 2, RuleBlocoStart = 3, 
    RuleBloco = 4, RuleComando = 5, RuleDeclaracaoVariavel = 6, RuleAtribuicao = 7, 
    RuleEstruturaWhile = 8, RuleEstruturaIf = 9, RuleEstruturaElsif = 10, 
    RuleEstruturaElse = 11, RuleCondicao = 12, RuleCondicaoAnd = 13, RuleCondicaoNot = 14, 
    RuleCondicaoPrimaria = 15, RuleOperadorComparacao = 16, RuleNovaInstancia = 17, 
    RuleExpressao = 18, RuleExpressaoSoma = 19, RuleExpressaoProduto = 20, 
    RuleExpressaoPrimaria = 21, RuleComandoPrint = 22, RuleComandoScan = 23, 
    RuleDeclaracaoFuncao = 24, RuleParametros = 25, RuleParametro = 26, 
    RuleBlocoFuncao = 27, RuleComandoRetorno = 28, RuleChamadaFuncao = 29, 
    RuleArgumentos = 30, RuleAcesso = 31, RuleTipo = 32
  };

  explicit gramaticaParser(antlr4::TokenStream *input);
  ~gramaticaParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramaContext;
  class DeclaracaoClasseContext;
  class CorpoClasseContext;
  class BlocoStartContext;
  class BlocoContext;
  class ComandoContext;
  class DeclaracaoVariavelContext;
  class AtribuicaoContext;
  class EstruturaWhileContext;
  class EstruturaIfContext;
  class EstruturaElsifContext;
  class EstruturaElseContext;
  class CondicaoContext;
  class CondicaoAndContext;
  class CondicaoNotContext;
  class CondicaoPrimariaContext;
  class OperadorComparacaoContext;
  class NovaInstanciaContext;
  class ExpressaoContext;
  class ExpressaoSomaContext;
  class ExpressaoProdutoContext;
  class ExpressaoPrimariaContext;
  class ComandoPrintContext;
  class ComandoScanContext;
  class DeclaracaoFuncaoContext;
  class ParametrosContext;
  class ParametroContext;
  class BlocoFuncaoContext;
  class ComandoRetornoContext;
  class ChamadaFuncaoContext;
  class ArgumentosContext;
  class AcessoContext;
  class TipoContext; 

  class  ProgramaContext : public antlr4::ParserRuleContext {
  public:
    ProgramaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlocoStartContext *blocoStart();
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclaracaoClasseContext *> declaracaoClasse();
    DeclaracaoClasseContext* declaracaoClasse(size_t i);
    std::vector<DeclaracaoFuncaoContext *> declaracaoFuncao();
    DeclaracaoFuncaoContext* declaracaoFuncao(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramaContext* programa();

  class  DeclaracaoClasseContext : public antlr4::ParserRuleContext {
  public:
    DeclaracaoClasseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *L_CHAVE();
    antlr4::tree::TerminalNode *R_CHAVE();
    std::vector<CorpoClasseContext *> corpoClasse();
    CorpoClasseContext* corpoClasse(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaracaoClasseContext* declaracaoClasse();

  class  CorpoClasseContext : public antlr4::ParserRuleContext {
  public:
    CorpoClasseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaracaoVariavelContext *declaracaoVariavel();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CorpoClasseContext* corpoClasse();

  class  BlocoStartContext : public antlr4::ParserRuleContext {
  public:
    BlocoStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    BlocoContext *bloco();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocoStartContext* blocoStart();

  class  BlocoContext : public antlr4::ParserRuleContext {
  public:
    BlocoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_CHAVE();
    antlr4::tree::TerminalNode *R_CHAVE();
    std::vector<ComandoContext *> comando();
    ComandoContext* comando(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocoContext* bloco();

  class  ComandoContext : public antlr4::ParserRuleContext {
  public:
    ComandoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaracaoVariavelContext *declaracaoVariavel();
    AtribuicaoContext *atribuicao();
    EstruturaWhileContext *estruturaWhile();
    EstruturaIfContext *estruturaIf();
    ComandoPrintContext *comandoPrint();
    ComandoScanContext *comandoScan();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComandoContext* comando();

  class  DeclaracaoVariavelContext : public antlr4::ParserRuleContext {
  public:
    DeclaracaoVariavelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TipoContext *tipo();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PONTOV();
    antlr4::tree::TerminalNode *RECEBA();
    NovaInstanciaContext *novaInstancia();
    ExpressaoContext *expressao();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaracaoVariavelContext* declaracaoVariavel();

  class  AtribuicaoContext : public antlr4::ParserRuleContext {
  public:
    AtribuicaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AcessoContext *acesso();
    antlr4::tree::TerminalNode *RECEBA();
    ExpressaoContext *expressao();
    antlr4::tree::TerminalNode *PONTOV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtribuicaoContext* atribuicao();

  class  EstruturaWhileContext : public antlr4::ParserRuleContext {
  public:
    EstruturaWhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *L_PARENTESE();
    CondicaoContext *condicao();
    antlr4::tree::TerminalNode *R_PARENTESE();
    BlocoContext *bloco();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EstruturaWhileContext* estruturaWhile();

  class  EstruturaIfContext : public antlr4::ParserRuleContext {
  public:
    EstruturaIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *L_PARENTESE();
    CondicaoContext *condicao();
    antlr4::tree::TerminalNode *R_PARENTESE();
    BlocoContext *bloco();
    std::vector<EstruturaElsifContext *> estruturaElsif();
    EstruturaElsifContext* estruturaElsif(size_t i);
    EstruturaElseContext *estruturaElse();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EstruturaIfContext* estruturaIf();

  class  EstruturaElsifContext : public antlr4::ParserRuleContext {
  public:
    EstruturaElsifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *L_PARENTESE();
    CondicaoContext *condicao();
    antlr4::tree::TerminalNode *R_PARENTESE();
    BlocoContext *bloco();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EstruturaElsifContext* estruturaElsif();

  class  EstruturaElseContext : public antlr4::ParserRuleContext {
  public:
    EstruturaElseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    BlocoContext *bloco();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EstruturaElseContext* estruturaElse();

  class  CondicaoContext : public antlr4::ParserRuleContext {
  public:
    CondicaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CondicaoAndContext *> condicaoAnd();
    CondicaoAndContext* condicaoAnd(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondicaoContext* condicao();

  class  CondicaoAndContext : public antlr4::ParserRuleContext {
  public:
    CondicaoAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CondicaoNotContext *> condicaoNot();
    CondicaoNotContext* condicaoNot(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondicaoAndContext* condicaoAnd();

  class  CondicaoNotContext : public antlr4::ParserRuleContext {
  public:
    CondicaoNotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    CondicaoNotContext *condicaoNot();
    CondicaoPrimariaContext *condicaoPrimaria();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondicaoNotContext* condicaoNot();

  class  CondicaoPrimariaContext : public antlr4::ParserRuleContext {
  public:
    CondicaoPrimariaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PARENTESE();
    CondicaoContext *condicao();
    antlr4::tree::TerminalNode *R_PARENTESE();
    AcessoContext *acesso();
    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    OperadorComparacaoContext *operadorComparacao();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondicaoPrimariaContext* condicaoPrimaria();

  class  OperadorComparacaoContext : public antlr4::ParserRuleContext {
  public:
    OperadorComparacaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IGUAL();
    antlr4::tree::TerminalNode *DIFF();
    antlr4::tree::TerminalNode *MENOR();
    antlr4::tree::TerminalNode *MENOR_IGUAL();
    antlr4::tree::TerminalNode *MAIOR();
    antlr4::tree::TerminalNode *MAIOR_IGUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperadorComparacaoContext* operadorComparacao();

  class  NovaInstanciaContext : public antlr4::ParserRuleContext {
  public:
    NovaInstanciaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *L_PARENTESE();
    antlr4::tree::TerminalNode *R_PARENTESE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NovaInstanciaContext* novaInstancia();

  class  ExpressaoContext : public antlr4::ParserRuleContext {
  public:
    ExpressaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressaoSomaContext *expressaoSoma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressaoContext* expressao();

  class  ExpressaoSomaContext : public antlr4::ParserRuleContext {
  public:
    ExpressaoSomaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressaoProdutoContext *> expressaoProduto();
    ExpressaoProdutoContext* expressaoProduto(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SOMA();
    antlr4::tree::TerminalNode* SOMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUBTRACAO();
    antlr4::tree::TerminalNode* SUBTRACAO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressaoSomaContext* expressaoSoma();

  class  ExpressaoProdutoContext : public antlr4::ParserRuleContext {
  public:
    ExpressaoProdutoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressaoPrimariaContext *> expressaoPrimaria();
    ExpressaoPrimariaContext* expressaoPrimaria(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULTIPLICACAO();
    antlr4::tree::TerminalNode* MULTIPLICACAO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVISAO();
    antlr4::tree::TerminalNode* DIVISAO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressaoProdutoContext* expressaoProduto();

  class  ExpressaoPrimariaContext : public antlr4::ParserRuleContext {
  public:
    ExpressaoPrimariaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChamadaFuncaoContext *chamadaFuncao();
    antlr4::tree::TerminalNode *NUM_INT();
    antlr4::tree::TerminalNode *NUM_FLOAT();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CHAR();
    AcessoContext *acesso();
    antlr4::tree::TerminalNode *L_PARENTESE();
    ExpressaoContext *expressao();
    antlr4::tree::TerminalNode *R_PARENTESE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressaoPrimariaContext* expressaoPrimaria();

  class  ComandoPrintContext : public antlr4::ParserRuleContext {
  public:
    ComandoPrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *L_PARENTESE();
    antlr4::tree::TerminalNode *R_PARENTESE();
    antlr4::tree::TerminalNode *PONTOV();
    ExpressaoContext *expressao();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComandoPrintContext* comandoPrint();

  class  ComandoScanContext : public antlr4::ParserRuleContext {
  public:
    ComandoScanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCAN();
    antlr4::tree::TerminalNode *L_PARENTESE();
    AcessoContext *acesso();
    antlr4::tree::TerminalNode *R_PARENTESE();
    antlr4::tree::TerminalNode *PONTOV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComandoScanContext* comandoScan();

  class  DeclaracaoFuncaoContext : public antlr4::ParserRuleContext {
  public:
    DeclaracaoFuncaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TipoContext *tipo();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *L_PARENTESE();
    antlr4::tree::TerminalNode *R_PARENTESE();
    BlocoFuncaoContext *blocoFuncao();
    ParametrosContext *parametros();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaracaoFuncaoContext* declaracaoFuncao();

  class  ParametrosContext : public antlr4::ParserRuleContext {
  public:
    ParametrosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParametroContext *> parametro();
    ParametroContext* parametro(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametrosContext* parametros();

  class  ParametroContext : public antlr4::ParserRuleContext {
  public:
    ParametroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TipoContext *tipo();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametroContext* parametro();

  class  BlocoFuncaoContext : public antlr4::ParserRuleContext {
  public:
    BlocoFuncaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_CHAVE();
    ComandoRetornoContext *comandoRetorno();
    antlr4::tree::TerminalNode *R_CHAVE();
    std::vector<ComandoContext *> comando();
    ComandoContext* comando(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocoFuncaoContext* blocoFuncao();

  class  ComandoRetornoContext : public antlr4::ParserRuleContext {
  public:
    ComandoRetornoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressaoContext *expressao();
    antlr4::tree::TerminalNode *PONTOV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComandoRetornoContext* comandoRetorno();

  class  ChamadaFuncaoContext : public antlr4::ParserRuleContext {
  public:
    ChamadaFuncaoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *L_PARENTESE();
    antlr4::tree::TerminalNode *R_PARENTESE();
    ArgumentosContext *argumentos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChamadaFuncaoContext* chamadaFuncao();

  class  ArgumentosContext : public antlr4::ParserRuleContext {
  public:
    ArgumentosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressaoContext *> expressao();
    ExpressaoContext* expressao(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VIRGULA();
    antlr4::tree::TerminalNode* VIRGULA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentosContext* argumentos();

  class  AcessoContext : public antlr4::ParserRuleContext {
  public:
    AcessoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AcessoContext* acesso();

  class  TipoContext : public antlr4::ParserRuleContext {
  public:
    TipoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TK_INT();
    antlr4::tree::TerminalNode *TK_FLOAT();
    antlr4::tree::TerminalNode *TK_STRING();
    antlr4::tree::TerminalNode *TK_CHAR();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TipoContext* tipo();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

