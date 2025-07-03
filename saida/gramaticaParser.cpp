
// Generated from gramatica.g4 by ANTLR 4.9.1


#include "gramaticaListener.h"
#include "gramaticaVisitor.h"

#include "gramaticaParser.h"


using namespace antlrcpp;
using namespace antlr4;

gramaticaParser::gramaticaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

gramaticaParser::~gramaticaParser() {
  delete _interpreter;
}

std::string gramaticaParser::getGrammarFileName() const {
  return "gramatica.g4";
}

const std::vector<std::string>& gramaticaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& gramaticaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramaContext ------------------------------------------------------------------

gramaticaParser::ProgramaContext::ProgramaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::BlocoStartContext* gramaticaParser::ProgramaContext::blocoStart() {
  return getRuleContext<gramaticaParser::BlocoStartContext>(0);
}

tree::TerminalNode* gramaticaParser::ProgramaContext::EOF() {
  return getToken(gramaticaParser::EOF, 0);
}

std::vector<gramaticaParser::DeclaracaoClasseContext *> gramaticaParser::ProgramaContext::declaracaoClasse() {
  return getRuleContexts<gramaticaParser::DeclaracaoClasseContext>();
}

gramaticaParser::DeclaracaoClasseContext* gramaticaParser::ProgramaContext::declaracaoClasse(size_t i) {
  return getRuleContext<gramaticaParser::DeclaracaoClasseContext>(i);
}

std::vector<gramaticaParser::DeclaracaoFuncaoContext *> gramaticaParser::ProgramaContext::declaracaoFuncao() {
  return getRuleContexts<gramaticaParser::DeclaracaoFuncaoContext>();
}

gramaticaParser::DeclaracaoFuncaoContext* gramaticaParser::ProgramaContext::declaracaoFuncao(size_t i) {
  return getRuleContext<gramaticaParser::DeclaracaoFuncaoContext>(i);
}


size_t gramaticaParser::ProgramaContext::getRuleIndex() const {
  return gramaticaParser::RulePrograma;
}

void gramaticaParser::ProgramaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrograma(this);
}

void gramaticaParser::ProgramaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrograma(this);
}


antlrcpp::Any gramaticaParser::ProgramaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitPrograma(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ProgramaContext* gramaticaParser::programa() {
  ProgramaContext *_localctx = _tracker.createInstance<ProgramaContext>(_ctx, getState());
  enterRule(_localctx, 0, gramaticaParser::RulePrograma);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramaticaParser::CLASS) {
      setState(66);
      declaracaoClasse();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << gramaticaParser::TK_INT)
      | (1ULL << gramaticaParser::TK_FLOAT)
      | (1ULL << gramaticaParser::TK_STRING)
      | (1ULL << gramaticaParser::TK_CHAR)
      | (1ULL << gramaticaParser::ID))) != 0)) {
      setState(72);
      declaracaoFuncao();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(78);
    blocoStart();
    setState(79);
    match(gramaticaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaracaoClasseContext ------------------------------------------------------------------

gramaticaParser::DeclaracaoClasseContext::DeclaracaoClasseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::DeclaracaoClasseContext::CLASS() {
  return getToken(gramaticaParser::CLASS, 0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoClasseContext::ID() {
  return getToken(gramaticaParser::ID, 0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoClasseContext::L_CHAVE() {
  return getToken(gramaticaParser::L_CHAVE, 0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoClasseContext::R_CHAVE() {
  return getToken(gramaticaParser::R_CHAVE, 0);
}

std::vector<gramaticaParser::CorpoClasseContext *> gramaticaParser::DeclaracaoClasseContext::corpoClasse() {
  return getRuleContexts<gramaticaParser::CorpoClasseContext>();
}

gramaticaParser::CorpoClasseContext* gramaticaParser::DeclaracaoClasseContext::corpoClasse(size_t i) {
  return getRuleContext<gramaticaParser::CorpoClasseContext>(i);
}


size_t gramaticaParser::DeclaracaoClasseContext::getRuleIndex() const {
  return gramaticaParser::RuleDeclaracaoClasse;
}

void gramaticaParser::DeclaracaoClasseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaracaoClasse(this);
}

void gramaticaParser::DeclaracaoClasseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaracaoClasse(this);
}


antlrcpp::Any gramaticaParser::DeclaracaoClasseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitDeclaracaoClasse(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::DeclaracaoClasseContext* gramaticaParser::declaracaoClasse() {
  DeclaracaoClasseContext *_localctx = _tracker.createInstance<DeclaracaoClasseContext>(_ctx, getState());
  enterRule(_localctx, 2, gramaticaParser::RuleDeclaracaoClasse);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(gramaticaParser::CLASS);
    setState(82);
    match(gramaticaParser::ID);
    setState(83);
    match(gramaticaParser::L_CHAVE);
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << gramaticaParser::TK_INT)
      | (1ULL << gramaticaParser::TK_FLOAT)
      | (1ULL << gramaticaParser::TK_STRING)
      | (1ULL << gramaticaParser::TK_CHAR)
      | (1ULL << gramaticaParser::ID))) != 0)) {
      setState(84);
      corpoClasse();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
    match(gramaticaParser::R_CHAVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CorpoClasseContext ------------------------------------------------------------------

gramaticaParser::CorpoClasseContext::CorpoClasseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::DeclaracaoVariavelContext* gramaticaParser::CorpoClasseContext::declaracaoVariavel() {
  return getRuleContext<gramaticaParser::DeclaracaoVariavelContext>(0);
}


size_t gramaticaParser::CorpoClasseContext::getRuleIndex() const {
  return gramaticaParser::RuleCorpoClasse;
}

void gramaticaParser::CorpoClasseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCorpoClasse(this);
}

void gramaticaParser::CorpoClasseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCorpoClasse(this);
}


antlrcpp::Any gramaticaParser::CorpoClasseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitCorpoClasse(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::CorpoClasseContext* gramaticaParser::corpoClasse() {
  CorpoClasseContext *_localctx = _tracker.createInstance<CorpoClasseContext>(_ctx, getState());
  enterRule(_localctx, 4, gramaticaParser::RuleCorpoClasse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    declaracaoVariavel();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocoStartContext ------------------------------------------------------------------

gramaticaParser::BlocoStartContext::BlocoStartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::BlocoStartContext::START() {
  return getToken(gramaticaParser::START, 0);
}

gramaticaParser::BlocoContext* gramaticaParser::BlocoStartContext::bloco() {
  return getRuleContext<gramaticaParser::BlocoContext>(0);
}


size_t gramaticaParser::BlocoStartContext::getRuleIndex() const {
  return gramaticaParser::RuleBlocoStart;
}

void gramaticaParser::BlocoStartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlocoStart(this);
}

void gramaticaParser::BlocoStartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlocoStart(this);
}


antlrcpp::Any gramaticaParser::BlocoStartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitBlocoStart(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::BlocoStartContext* gramaticaParser::blocoStart() {
  BlocoStartContext *_localctx = _tracker.createInstance<BlocoStartContext>(_ctx, getState());
  enterRule(_localctx, 6, gramaticaParser::RuleBlocoStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(gramaticaParser::START);
    setState(95);
    bloco();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocoContext ------------------------------------------------------------------

gramaticaParser::BlocoContext::BlocoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::BlocoContext::L_CHAVE() {
  return getToken(gramaticaParser::L_CHAVE, 0);
}

tree::TerminalNode* gramaticaParser::BlocoContext::R_CHAVE() {
  return getToken(gramaticaParser::R_CHAVE, 0);
}

std::vector<gramaticaParser::ComandoContext *> gramaticaParser::BlocoContext::comando() {
  return getRuleContexts<gramaticaParser::ComandoContext>();
}

gramaticaParser::ComandoContext* gramaticaParser::BlocoContext::comando(size_t i) {
  return getRuleContext<gramaticaParser::ComandoContext>(i);
}


size_t gramaticaParser::BlocoContext::getRuleIndex() const {
  return gramaticaParser::RuleBloco;
}

void gramaticaParser::BlocoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBloco(this);
}

void gramaticaParser::BlocoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBloco(this);
}


antlrcpp::Any gramaticaParser::BlocoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitBloco(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::BlocoContext* gramaticaParser::bloco() {
  BlocoContext *_localctx = _tracker.createInstance<BlocoContext>(_ctx, getState());
  enterRule(_localctx, 8, gramaticaParser::RuleBloco);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(gramaticaParser::L_CHAVE);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << gramaticaParser::IF)
      | (1ULL << gramaticaParser::WHILE)
      | (1ULL << gramaticaParser::TK_INT)
      | (1ULL << gramaticaParser::TK_FLOAT)
      | (1ULL << gramaticaParser::TK_STRING)
      | (1ULL << gramaticaParser::TK_CHAR)
      | (1ULL << gramaticaParser::PRINT)
      | (1ULL << gramaticaParser::SCAN)
      | (1ULL << gramaticaParser::ID))) != 0)) {
      setState(98);
      comando();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
    match(gramaticaParser::R_CHAVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComandoContext ------------------------------------------------------------------

gramaticaParser::ComandoContext::ComandoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::DeclaracaoVariavelContext* gramaticaParser::ComandoContext::declaracaoVariavel() {
  return getRuleContext<gramaticaParser::DeclaracaoVariavelContext>(0);
}

gramaticaParser::AtribuicaoContext* gramaticaParser::ComandoContext::atribuicao() {
  return getRuleContext<gramaticaParser::AtribuicaoContext>(0);
}

gramaticaParser::EstruturaWhileContext* gramaticaParser::ComandoContext::estruturaWhile() {
  return getRuleContext<gramaticaParser::EstruturaWhileContext>(0);
}

gramaticaParser::EstruturaIfContext* gramaticaParser::ComandoContext::estruturaIf() {
  return getRuleContext<gramaticaParser::EstruturaIfContext>(0);
}

gramaticaParser::ComandoPrintContext* gramaticaParser::ComandoContext::comandoPrint() {
  return getRuleContext<gramaticaParser::ComandoPrintContext>(0);
}

gramaticaParser::ComandoScanContext* gramaticaParser::ComandoContext::comandoScan() {
  return getRuleContext<gramaticaParser::ComandoScanContext>(0);
}


size_t gramaticaParser::ComandoContext::getRuleIndex() const {
  return gramaticaParser::RuleComando;
}

void gramaticaParser::ComandoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComando(this);
}

void gramaticaParser::ComandoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComando(this);
}


antlrcpp::Any gramaticaParser::ComandoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitComando(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ComandoContext* gramaticaParser::comando() {
  ComandoContext *_localctx = _tracker.createInstance<ComandoContext>(_ctx, getState());
  enterRule(_localctx, 10, gramaticaParser::RuleComando);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(106);
      declaracaoVariavel();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(107);
      atribuicao();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(108);
      estruturaWhile();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(109);
      estruturaIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(110);
      comandoPrint();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(111);
      comandoScan();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaracaoVariavelContext ------------------------------------------------------------------

gramaticaParser::DeclaracaoVariavelContext::DeclaracaoVariavelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::TipoContext* gramaticaParser::DeclaracaoVariavelContext::tipo() {
  return getRuleContext<gramaticaParser::TipoContext>(0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoVariavelContext::ID() {
  return getToken(gramaticaParser::ID, 0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoVariavelContext::PONTOV() {
  return getToken(gramaticaParser::PONTOV, 0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoVariavelContext::RECEBA() {
  return getToken(gramaticaParser::RECEBA, 0);
}

gramaticaParser::NovaInstanciaContext* gramaticaParser::DeclaracaoVariavelContext::novaInstancia() {
  return getRuleContext<gramaticaParser::NovaInstanciaContext>(0);
}

gramaticaParser::ExpressaoContext* gramaticaParser::DeclaracaoVariavelContext::expressao() {
  return getRuleContext<gramaticaParser::ExpressaoContext>(0);
}


size_t gramaticaParser::DeclaracaoVariavelContext::getRuleIndex() const {
  return gramaticaParser::RuleDeclaracaoVariavel;
}

void gramaticaParser::DeclaracaoVariavelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaracaoVariavel(this);
}

void gramaticaParser::DeclaracaoVariavelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaracaoVariavel(this);
}


antlrcpp::Any gramaticaParser::DeclaracaoVariavelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitDeclaracaoVariavel(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::DeclaracaoVariavelContext* gramaticaParser::declaracaoVariavel() {
  DeclaracaoVariavelContext *_localctx = _tracker.createInstance<DeclaracaoVariavelContext>(_ctx, getState());
  enterRule(_localctx, 12, gramaticaParser::RuleDeclaracaoVariavel);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    tipo();
    setState(115);
    match(gramaticaParser::ID);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == gramaticaParser::RECEBA) {
      setState(116);
      match(gramaticaParser::RECEBA);
      setState(119);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case gramaticaParser::NEW: {
          setState(117);
          novaInstancia();
          break;
        }

        case gramaticaParser::NUM_INT:
        case gramaticaParser::NUM_FLOAT:
        case gramaticaParser::STRING:
        case gramaticaParser::CHAR:
        case gramaticaParser::L_PARENTESE:
        case gramaticaParser::ID: {
          setState(118);
          expressao();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
    setState(123);
    match(gramaticaParser::PONTOV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtribuicaoContext ------------------------------------------------------------------

gramaticaParser::AtribuicaoContext::AtribuicaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::AcessoContext* gramaticaParser::AtribuicaoContext::acesso() {
  return getRuleContext<gramaticaParser::AcessoContext>(0);
}

tree::TerminalNode* gramaticaParser::AtribuicaoContext::RECEBA() {
  return getToken(gramaticaParser::RECEBA, 0);
}

gramaticaParser::ExpressaoContext* gramaticaParser::AtribuicaoContext::expressao() {
  return getRuleContext<gramaticaParser::ExpressaoContext>(0);
}

tree::TerminalNode* gramaticaParser::AtribuicaoContext::PONTOV() {
  return getToken(gramaticaParser::PONTOV, 0);
}


size_t gramaticaParser::AtribuicaoContext::getRuleIndex() const {
  return gramaticaParser::RuleAtribuicao;
}

void gramaticaParser::AtribuicaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtribuicao(this);
}

void gramaticaParser::AtribuicaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtribuicao(this);
}


antlrcpp::Any gramaticaParser::AtribuicaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitAtribuicao(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::AtribuicaoContext* gramaticaParser::atribuicao() {
  AtribuicaoContext *_localctx = _tracker.createInstance<AtribuicaoContext>(_ctx, getState());
  enterRule(_localctx, 14, gramaticaParser::RuleAtribuicao);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    acesso();
    setState(126);
    match(gramaticaParser::RECEBA);
    setState(127);
    expressao();
    setState(128);
    match(gramaticaParser::PONTOV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EstruturaWhileContext ------------------------------------------------------------------

gramaticaParser::EstruturaWhileContext::EstruturaWhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::EstruturaWhileContext::WHILE() {
  return getToken(gramaticaParser::WHILE, 0);
}

tree::TerminalNode* gramaticaParser::EstruturaWhileContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

gramaticaParser::CondicaoContext* gramaticaParser::EstruturaWhileContext::condicao() {
  return getRuleContext<gramaticaParser::CondicaoContext>(0);
}

tree::TerminalNode* gramaticaParser::EstruturaWhileContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}

gramaticaParser::BlocoContext* gramaticaParser::EstruturaWhileContext::bloco() {
  return getRuleContext<gramaticaParser::BlocoContext>(0);
}


size_t gramaticaParser::EstruturaWhileContext::getRuleIndex() const {
  return gramaticaParser::RuleEstruturaWhile;
}

void gramaticaParser::EstruturaWhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEstruturaWhile(this);
}

void gramaticaParser::EstruturaWhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEstruturaWhile(this);
}


antlrcpp::Any gramaticaParser::EstruturaWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitEstruturaWhile(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::EstruturaWhileContext* gramaticaParser::estruturaWhile() {
  EstruturaWhileContext *_localctx = _tracker.createInstance<EstruturaWhileContext>(_ctx, getState());
  enterRule(_localctx, 16, gramaticaParser::RuleEstruturaWhile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(gramaticaParser::WHILE);
    setState(131);
    match(gramaticaParser::L_PARENTESE);
    setState(132);
    condicao();
    setState(133);
    match(gramaticaParser::R_PARENTESE);
    setState(134);
    bloco();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EstruturaIfContext ------------------------------------------------------------------

gramaticaParser::EstruturaIfContext::EstruturaIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::EstruturaIfContext::IF() {
  return getToken(gramaticaParser::IF, 0);
}

tree::TerminalNode* gramaticaParser::EstruturaIfContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

gramaticaParser::CondicaoContext* gramaticaParser::EstruturaIfContext::condicao() {
  return getRuleContext<gramaticaParser::CondicaoContext>(0);
}

tree::TerminalNode* gramaticaParser::EstruturaIfContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}

gramaticaParser::BlocoContext* gramaticaParser::EstruturaIfContext::bloco() {
  return getRuleContext<gramaticaParser::BlocoContext>(0);
}

std::vector<gramaticaParser::EstruturaElsifContext *> gramaticaParser::EstruturaIfContext::estruturaElsif() {
  return getRuleContexts<gramaticaParser::EstruturaElsifContext>();
}

gramaticaParser::EstruturaElsifContext* gramaticaParser::EstruturaIfContext::estruturaElsif(size_t i) {
  return getRuleContext<gramaticaParser::EstruturaElsifContext>(i);
}

gramaticaParser::EstruturaElseContext* gramaticaParser::EstruturaIfContext::estruturaElse() {
  return getRuleContext<gramaticaParser::EstruturaElseContext>(0);
}


size_t gramaticaParser::EstruturaIfContext::getRuleIndex() const {
  return gramaticaParser::RuleEstruturaIf;
}

void gramaticaParser::EstruturaIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEstruturaIf(this);
}

void gramaticaParser::EstruturaIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEstruturaIf(this);
}


antlrcpp::Any gramaticaParser::EstruturaIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitEstruturaIf(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::EstruturaIfContext* gramaticaParser::estruturaIf() {
  EstruturaIfContext *_localctx = _tracker.createInstance<EstruturaIfContext>(_ctx, getState());
  enterRule(_localctx, 18, gramaticaParser::RuleEstruturaIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(gramaticaParser::IF);
    setState(137);
    match(gramaticaParser::L_PARENTESE);
    setState(138);
    condicao();
    setState(139);
    match(gramaticaParser::R_PARENTESE);
    setState(140);
    bloco();
    setState(144);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(141);
        estruturaElsif(); 
      }
      setState(146);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == gramaticaParser::ELSE) {
      setState(147);
      estruturaElse();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EstruturaElsifContext ------------------------------------------------------------------

gramaticaParser::EstruturaElsifContext::EstruturaElsifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::EstruturaElsifContext::ELSE() {
  return getToken(gramaticaParser::ELSE, 0);
}

tree::TerminalNode* gramaticaParser::EstruturaElsifContext::IF() {
  return getToken(gramaticaParser::IF, 0);
}

tree::TerminalNode* gramaticaParser::EstruturaElsifContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

gramaticaParser::CondicaoContext* gramaticaParser::EstruturaElsifContext::condicao() {
  return getRuleContext<gramaticaParser::CondicaoContext>(0);
}

tree::TerminalNode* gramaticaParser::EstruturaElsifContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}

gramaticaParser::BlocoContext* gramaticaParser::EstruturaElsifContext::bloco() {
  return getRuleContext<gramaticaParser::BlocoContext>(0);
}


size_t gramaticaParser::EstruturaElsifContext::getRuleIndex() const {
  return gramaticaParser::RuleEstruturaElsif;
}

void gramaticaParser::EstruturaElsifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEstruturaElsif(this);
}

void gramaticaParser::EstruturaElsifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEstruturaElsif(this);
}


antlrcpp::Any gramaticaParser::EstruturaElsifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitEstruturaElsif(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::EstruturaElsifContext* gramaticaParser::estruturaElsif() {
  EstruturaElsifContext *_localctx = _tracker.createInstance<EstruturaElsifContext>(_ctx, getState());
  enterRule(_localctx, 20, gramaticaParser::RuleEstruturaElsif);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(gramaticaParser::ELSE);
    setState(151);
    match(gramaticaParser::IF);
    setState(152);
    match(gramaticaParser::L_PARENTESE);
    setState(153);
    condicao();
    setState(154);
    match(gramaticaParser::R_PARENTESE);
    setState(155);
    bloco();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EstruturaElseContext ------------------------------------------------------------------

gramaticaParser::EstruturaElseContext::EstruturaElseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::EstruturaElseContext::ELSE() {
  return getToken(gramaticaParser::ELSE, 0);
}

gramaticaParser::BlocoContext* gramaticaParser::EstruturaElseContext::bloco() {
  return getRuleContext<gramaticaParser::BlocoContext>(0);
}


size_t gramaticaParser::EstruturaElseContext::getRuleIndex() const {
  return gramaticaParser::RuleEstruturaElse;
}

void gramaticaParser::EstruturaElseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEstruturaElse(this);
}

void gramaticaParser::EstruturaElseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEstruturaElse(this);
}


antlrcpp::Any gramaticaParser::EstruturaElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitEstruturaElse(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::EstruturaElseContext* gramaticaParser::estruturaElse() {
  EstruturaElseContext *_localctx = _tracker.createInstance<EstruturaElseContext>(_ctx, getState());
  enterRule(_localctx, 22, gramaticaParser::RuleEstruturaElse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(gramaticaParser::ELSE);
    setState(158);
    bloco();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondicaoContext ------------------------------------------------------------------

gramaticaParser::CondicaoContext::CondicaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramaticaParser::CondicaoAndContext *> gramaticaParser::CondicaoContext::condicaoAnd() {
  return getRuleContexts<gramaticaParser::CondicaoAndContext>();
}

gramaticaParser::CondicaoAndContext* gramaticaParser::CondicaoContext::condicaoAnd(size_t i) {
  return getRuleContext<gramaticaParser::CondicaoAndContext>(i);
}

std::vector<tree::TerminalNode *> gramaticaParser::CondicaoContext::OR() {
  return getTokens(gramaticaParser::OR);
}

tree::TerminalNode* gramaticaParser::CondicaoContext::OR(size_t i) {
  return getToken(gramaticaParser::OR, i);
}


size_t gramaticaParser::CondicaoContext::getRuleIndex() const {
  return gramaticaParser::RuleCondicao;
}

void gramaticaParser::CondicaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondicao(this);
}

void gramaticaParser::CondicaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondicao(this);
}


antlrcpp::Any gramaticaParser::CondicaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitCondicao(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::CondicaoContext* gramaticaParser::condicao() {
  CondicaoContext *_localctx = _tracker.createInstance<CondicaoContext>(_ctx, getState());
  enterRule(_localctx, 24, gramaticaParser::RuleCondicao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    condicaoAnd();
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramaticaParser::OR) {
      setState(161);
      match(gramaticaParser::OR);
      setState(162);
      condicaoAnd();
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondicaoAndContext ------------------------------------------------------------------

gramaticaParser::CondicaoAndContext::CondicaoAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramaticaParser::CondicaoNotContext *> gramaticaParser::CondicaoAndContext::condicaoNot() {
  return getRuleContexts<gramaticaParser::CondicaoNotContext>();
}

gramaticaParser::CondicaoNotContext* gramaticaParser::CondicaoAndContext::condicaoNot(size_t i) {
  return getRuleContext<gramaticaParser::CondicaoNotContext>(i);
}

std::vector<tree::TerminalNode *> gramaticaParser::CondicaoAndContext::AND() {
  return getTokens(gramaticaParser::AND);
}

tree::TerminalNode* gramaticaParser::CondicaoAndContext::AND(size_t i) {
  return getToken(gramaticaParser::AND, i);
}


size_t gramaticaParser::CondicaoAndContext::getRuleIndex() const {
  return gramaticaParser::RuleCondicaoAnd;
}

void gramaticaParser::CondicaoAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondicaoAnd(this);
}

void gramaticaParser::CondicaoAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondicaoAnd(this);
}


antlrcpp::Any gramaticaParser::CondicaoAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitCondicaoAnd(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::CondicaoAndContext* gramaticaParser::condicaoAnd() {
  CondicaoAndContext *_localctx = _tracker.createInstance<CondicaoAndContext>(_ctx, getState());
  enterRule(_localctx, 26, gramaticaParser::RuleCondicaoAnd);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    condicaoNot();
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramaticaParser::AND) {
      setState(169);
      match(gramaticaParser::AND);
      setState(170);
      condicaoNot();
      setState(175);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondicaoNotContext ------------------------------------------------------------------

gramaticaParser::CondicaoNotContext::CondicaoNotContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::CondicaoNotContext::NOT() {
  return getToken(gramaticaParser::NOT, 0);
}

gramaticaParser::CondicaoNotContext* gramaticaParser::CondicaoNotContext::condicaoNot() {
  return getRuleContext<gramaticaParser::CondicaoNotContext>(0);
}

gramaticaParser::CondicaoPrimariaContext* gramaticaParser::CondicaoNotContext::condicaoPrimaria() {
  return getRuleContext<gramaticaParser::CondicaoPrimariaContext>(0);
}


size_t gramaticaParser::CondicaoNotContext::getRuleIndex() const {
  return gramaticaParser::RuleCondicaoNot;
}

void gramaticaParser::CondicaoNotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondicaoNot(this);
}

void gramaticaParser::CondicaoNotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondicaoNot(this);
}


antlrcpp::Any gramaticaParser::CondicaoNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitCondicaoNot(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::CondicaoNotContext* gramaticaParser::condicaoNot() {
  CondicaoNotContext *_localctx = _tracker.createInstance<CondicaoNotContext>(_ctx, getState());
  enterRule(_localctx, 28, gramaticaParser::RuleCondicaoNot);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case gramaticaParser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(176);
        match(gramaticaParser::NOT);
        setState(177);
        condicaoNot();
        break;
      }

      case gramaticaParser::NUM_INT:
      case gramaticaParser::NUM_FLOAT:
      case gramaticaParser::STRING:
      case gramaticaParser::CHAR:
      case gramaticaParser::L_PARENTESE:
      case gramaticaParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(178);
        condicaoPrimaria();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondicaoPrimariaContext ------------------------------------------------------------------

gramaticaParser::CondicaoPrimariaContext::CondicaoPrimariaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::CondicaoPrimariaContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

gramaticaParser::CondicaoContext* gramaticaParser::CondicaoPrimariaContext::condicao() {
  return getRuleContext<gramaticaParser::CondicaoContext>(0);
}

tree::TerminalNode* gramaticaParser::CondicaoPrimariaContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}

gramaticaParser::AcessoContext* gramaticaParser::CondicaoPrimariaContext::acesso() {
  return getRuleContext<gramaticaParser::AcessoContext>(0);
}

std::vector<gramaticaParser::ExpressaoContext *> gramaticaParser::CondicaoPrimariaContext::expressao() {
  return getRuleContexts<gramaticaParser::ExpressaoContext>();
}

gramaticaParser::ExpressaoContext* gramaticaParser::CondicaoPrimariaContext::expressao(size_t i) {
  return getRuleContext<gramaticaParser::ExpressaoContext>(i);
}

gramaticaParser::OperadorComparacaoContext* gramaticaParser::CondicaoPrimariaContext::operadorComparacao() {
  return getRuleContext<gramaticaParser::OperadorComparacaoContext>(0);
}


size_t gramaticaParser::CondicaoPrimariaContext::getRuleIndex() const {
  return gramaticaParser::RuleCondicaoPrimaria;
}

void gramaticaParser::CondicaoPrimariaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondicaoPrimaria(this);
}

void gramaticaParser::CondicaoPrimariaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondicaoPrimaria(this);
}


antlrcpp::Any gramaticaParser::CondicaoPrimariaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitCondicaoPrimaria(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::CondicaoPrimariaContext* gramaticaParser::condicaoPrimaria() {
  CondicaoPrimariaContext *_localctx = _tracker.createInstance<CondicaoPrimariaContext>(_ctx, getState());
  enterRule(_localctx, 30, gramaticaParser::RuleCondicaoPrimaria);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(181);
      match(gramaticaParser::L_PARENTESE);
      setState(182);
      condicao();
      setState(183);
      match(gramaticaParser::R_PARENTESE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(185);
      acesso();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(186);
      expressao();
      setState(187);
      operadorComparacao();
      setState(188);
      expressao();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperadorComparacaoContext ------------------------------------------------------------------

gramaticaParser::OperadorComparacaoContext::OperadorComparacaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::OperadorComparacaoContext::IGUAL() {
  return getToken(gramaticaParser::IGUAL, 0);
}

tree::TerminalNode* gramaticaParser::OperadorComparacaoContext::DIFF() {
  return getToken(gramaticaParser::DIFF, 0);
}

tree::TerminalNode* gramaticaParser::OperadorComparacaoContext::MENOR() {
  return getToken(gramaticaParser::MENOR, 0);
}

tree::TerminalNode* gramaticaParser::OperadorComparacaoContext::MENOR_IGUAL() {
  return getToken(gramaticaParser::MENOR_IGUAL, 0);
}

tree::TerminalNode* gramaticaParser::OperadorComparacaoContext::MAIOR() {
  return getToken(gramaticaParser::MAIOR, 0);
}

tree::TerminalNode* gramaticaParser::OperadorComparacaoContext::MAIOR_IGUAL() {
  return getToken(gramaticaParser::MAIOR_IGUAL, 0);
}


size_t gramaticaParser::OperadorComparacaoContext::getRuleIndex() const {
  return gramaticaParser::RuleOperadorComparacao;
}

void gramaticaParser::OperadorComparacaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperadorComparacao(this);
}

void gramaticaParser::OperadorComparacaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperadorComparacao(this);
}


antlrcpp::Any gramaticaParser::OperadorComparacaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitOperadorComparacao(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::OperadorComparacaoContext* gramaticaParser::operadorComparacao() {
  OperadorComparacaoContext *_localctx = _tracker.createInstance<OperadorComparacaoContext>(_ctx, getState());
  enterRule(_localctx, 32, gramaticaParser::RuleOperadorComparacao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << gramaticaParser::IGUAL)
      | (1ULL << gramaticaParser::DIFF)
      | (1ULL << gramaticaParser::MENOR)
      | (1ULL << gramaticaParser::MAIOR)
      | (1ULL << gramaticaParser::MAIOR_IGUAL)
      | (1ULL << gramaticaParser::MENOR_IGUAL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NovaInstanciaContext ------------------------------------------------------------------

gramaticaParser::NovaInstanciaContext::NovaInstanciaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::NovaInstanciaContext::NEW() {
  return getToken(gramaticaParser::NEW, 0);
}

tree::TerminalNode* gramaticaParser::NovaInstanciaContext::ID() {
  return getToken(gramaticaParser::ID, 0);
}

tree::TerminalNode* gramaticaParser::NovaInstanciaContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

tree::TerminalNode* gramaticaParser::NovaInstanciaContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}


size_t gramaticaParser::NovaInstanciaContext::getRuleIndex() const {
  return gramaticaParser::RuleNovaInstancia;
}

void gramaticaParser::NovaInstanciaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNovaInstancia(this);
}

void gramaticaParser::NovaInstanciaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNovaInstancia(this);
}


antlrcpp::Any gramaticaParser::NovaInstanciaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitNovaInstancia(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::NovaInstanciaContext* gramaticaParser::novaInstancia() {
  NovaInstanciaContext *_localctx = _tracker.createInstance<NovaInstanciaContext>(_ctx, getState());
  enterRule(_localctx, 34, gramaticaParser::RuleNovaInstancia);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(gramaticaParser::NEW);
    setState(195);
    match(gramaticaParser::ID);
    setState(196);
    match(gramaticaParser::L_PARENTESE);
    setState(197);
    match(gramaticaParser::R_PARENTESE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressaoContext ------------------------------------------------------------------

gramaticaParser::ExpressaoContext::ExpressaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::ExpressaoSomaContext* gramaticaParser::ExpressaoContext::expressaoSoma() {
  return getRuleContext<gramaticaParser::ExpressaoSomaContext>(0);
}


size_t gramaticaParser::ExpressaoContext::getRuleIndex() const {
  return gramaticaParser::RuleExpressao;
}

void gramaticaParser::ExpressaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressao(this);
}

void gramaticaParser::ExpressaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressao(this);
}


antlrcpp::Any gramaticaParser::ExpressaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitExpressao(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ExpressaoContext* gramaticaParser::expressao() {
  ExpressaoContext *_localctx = _tracker.createInstance<ExpressaoContext>(_ctx, getState());
  enterRule(_localctx, 36, gramaticaParser::RuleExpressao);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    expressaoSoma();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressaoSomaContext ------------------------------------------------------------------

gramaticaParser::ExpressaoSomaContext::ExpressaoSomaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramaticaParser::ExpressaoProdutoContext *> gramaticaParser::ExpressaoSomaContext::expressaoProduto() {
  return getRuleContexts<gramaticaParser::ExpressaoProdutoContext>();
}

gramaticaParser::ExpressaoProdutoContext* gramaticaParser::ExpressaoSomaContext::expressaoProduto(size_t i) {
  return getRuleContext<gramaticaParser::ExpressaoProdutoContext>(i);
}

std::vector<tree::TerminalNode *> gramaticaParser::ExpressaoSomaContext::SOMA() {
  return getTokens(gramaticaParser::SOMA);
}

tree::TerminalNode* gramaticaParser::ExpressaoSomaContext::SOMA(size_t i) {
  return getToken(gramaticaParser::SOMA, i);
}

std::vector<tree::TerminalNode *> gramaticaParser::ExpressaoSomaContext::SUBTRACAO() {
  return getTokens(gramaticaParser::SUBTRACAO);
}

tree::TerminalNode* gramaticaParser::ExpressaoSomaContext::SUBTRACAO(size_t i) {
  return getToken(gramaticaParser::SUBTRACAO, i);
}


size_t gramaticaParser::ExpressaoSomaContext::getRuleIndex() const {
  return gramaticaParser::RuleExpressaoSoma;
}

void gramaticaParser::ExpressaoSomaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressaoSoma(this);
}

void gramaticaParser::ExpressaoSomaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressaoSoma(this);
}


antlrcpp::Any gramaticaParser::ExpressaoSomaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitExpressaoSoma(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ExpressaoSomaContext* gramaticaParser::expressaoSoma() {
  ExpressaoSomaContext *_localctx = _tracker.createInstance<ExpressaoSomaContext>(_ctx, getState());
  enterRule(_localctx, 38, gramaticaParser::RuleExpressaoSoma);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    expressaoProduto();
    setState(206);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramaticaParser::SOMA

    || _la == gramaticaParser::SUBTRACAO) {
      setState(202);
      _la = _input->LA(1);
      if (!(_la == gramaticaParser::SOMA

      || _la == gramaticaParser::SUBTRACAO)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(203);
      expressaoProduto();
      setState(208);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressaoProdutoContext ------------------------------------------------------------------

gramaticaParser::ExpressaoProdutoContext::ExpressaoProdutoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramaticaParser::ExpressaoPrimariaContext *> gramaticaParser::ExpressaoProdutoContext::expressaoPrimaria() {
  return getRuleContexts<gramaticaParser::ExpressaoPrimariaContext>();
}

gramaticaParser::ExpressaoPrimariaContext* gramaticaParser::ExpressaoProdutoContext::expressaoPrimaria(size_t i) {
  return getRuleContext<gramaticaParser::ExpressaoPrimariaContext>(i);
}

std::vector<tree::TerminalNode *> gramaticaParser::ExpressaoProdutoContext::MULTIPLICACAO() {
  return getTokens(gramaticaParser::MULTIPLICACAO);
}

tree::TerminalNode* gramaticaParser::ExpressaoProdutoContext::MULTIPLICACAO(size_t i) {
  return getToken(gramaticaParser::MULTIPLICACAO, i);
}

std::vector<tree::TerminalNode *> gramaticaParser::ExpressaoProdutoContext::DIVISAO() {
  return getTokens(gramaticaParser::DIVISAO);
}

tree::TerminalNode* gramaticaParser::ExpressaoProdutoContext::DIVISAO(size_t i) {
  return getToken(gramaticaParser::DIVISAO, i);
}


size_t gramaticaParser::ExpressaoProdutoContext::getRuleIndex() const {
  return gramaticaParser::RuleExpressaoProduto;
}

void gramaticaParser::ExpressaoProdutoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressaoProduto(this);
}

void gramaticaParser::ExpressaoProdutoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressaoProduto(this);
}


antlrcpp::Any gramaticaParser::ExpressaoProdutoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitExpressaoProduto(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ExpressaoProdutoContext* gramaticaParser::expressaoProduto() {
  ExpressaoProdutoContext *_localctx = _tracker.createInstance<ExpressaoProdutoContext>(_ctx, getState());
  enterRule(_localctx, 40, gramaticaParser::RuleExpressaoProduto);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    expressaoPrimaria();
    setState(214);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramaticaParser::MULTIPLICACAO

    || _la == gramaticaParser::DIVISAO) {
      setState(210);
      _la = _input->LA(1);
      if (!(_la == gramaticaParser::MULTIPLICACAO

      || _la == gramaticaParser::DIVISAO)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(211);
      expressaoPrimaria();
      setState(216);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressaoPrimariaContext ------------------------------------------------------------------

gramaticaParser::ExpressaoPrimariaContext::ExpressaoPrimariaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::ChamadaFuncaoContext* gramaticaParser::ExpressaoPrimariaContext::chamadaFuncao() {
  return getRuleContext<gramaticaParser::ChamadaFuncaoContext>(0);
}

tree::TerminalNode* gramaticaParser::ExpressaoPrimariaContext::NUM_INT() {
  return getToken(gramaticaParser::NUM_INT, 0);
}

tree::TerminalNode* gramaticaParser::ExpressaoPrimariaContext::NUM_FLOAT() {
  return getToken(gramaticaParser::NUM_FLOAT, 0);
}

tree::TerminalNode* gramaticaParser::ExpressaoPrimariaContext::STRING() {
  return getToken(gramaticaParser::STRING, 0);
}

tree::TerminalNode* gramaticaParser::ExpressaoPrimariaContext::CHAR() {
  return getToken(gramaticaParser::CHAR, 0);
}

gramaticaParser::AcessoContext* gramaticaParser::ExpressaoPrimariaContext::acesso() {
  return getRuleContext<gramaticaParser::AcessoContext>(0);
}

tree::TerminalNode* gramaticaParser::ExpressaoPrimariaContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

gramaticaParser::ExpressaoContext* gramaticaParser::ExpressaoPrimariaContext::expressao() {
  return getRuleContext<gramaticaParser::ExpressaoContext>(0);
}

tree::TerminalNode* gramaticaParser::ExpressaoPrimariaContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}


size_t gramaticaParser::ExpressaoPrimariaContext::getRuleIndex() const {
  return gramaticaParser::RuleExpressaoPrimaria;
}

void gramaticaParser::ExpressaoPrimariaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressaoPrimaria(this);
}

void gramaticaParser::ExpressaoPrimariaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressaoPrimaria(this);
}


antlrcpp::Any gramaticaParser::ExpressaoPrimariaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitExpressaoPrimaria(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ExpressaoPrimariaContext* gramaticaParser::expressaoPrimaria() {
  ExpressaoPrimariaContext *_localctx = _tracker.createInstance<ExpressaoPrimariaContext>(_ctx, getState());
  enterRule(_localctx, 42, gramaticaParser::RuleExpressaoPrimaria);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(217);
      chamadaFuncao();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(218);
      match(gramaticaParser::NUM_INT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(219);
      match(gramaticaParser::NUM_FLOAT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(220);
      match(gramaticaParser::STRING);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(221);
      match(gramaticaParser::CHAR);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(222);
      acesso();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(223);
      match(gramaticaParser::L_PARENTESE);
      setState(224);
      expressao();
      setState(225);
      match(gramaticaParser::R_PARENTESE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComandoPrintContext ------------------------------------------------------------------

gramaticaParser::ComandoPrintContext::ComandoPrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::ComandoPrintContext::PRINT() {
  return getToken(gramaticaParser::PRINT, 0);
}

tree::TerminalNode* gramaticaParser::ComandoPrintContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

tree::TerminalNode* gramaticaParser::ComandoPrintContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}

tree::TerminalNode* gramaticaParser::ComandoPrintContext::PONTOV() {
  return getToken(gramaticaParser::PONTOV, 0);
}

gramaticaParser::ExpressaoContext* gramaticaParser::ComandoPrintContext::expressao() {
  return getRuleContext<gramaticaParser::ExpressaoContext>(0);
}


size_t gramaticaParser::ComandoPrintContext::getRuleIndex() const {
  return gramaticaParser::RuleComandoPrint;
}

void gramaticaParser::ComandoPrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComandoPrint(this);
}

void gramaticaParser::ComandoPrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComandoPrint(this);
}


antlrcpp::Any gramaticaParser::ComandoPrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitComandoPrint(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ComandoPrintContext* gramaticaParser::comandoPrint() {
  ComandoPrintContext *_localctx = _tracker.createInstance<ComandoPrintContext>(_ctx, getState());
  enterRule(_localctx, 44, gramaticaParser::RuleComandoPrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(gramaticaParser::PRINT);
    setState(230);
    match(gramaticaParser::L_PARENTESE);

    setState(231);
    expressao();
    setState(232);
    match(gramaticaParser::R_PARENTESE);
    setState(233);
    match(gramaticaParser::PONTOV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComandoScanContext ------------------------------------------------------------------

gramaticaParser::ComandoScanContext::ComandoScanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::ComandoScanContext::SCAN() {
  return getToken(gramaticaParser::SCAN, 0);
}

tree::TerminalNode* gramaticaParser::ComandoScanContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

gramaticaParser::AcessoContext* gramaticaParser::ComandoScanContext::acesso() {
  return getRuleContext<gramaticaParser::AcessoContext>(0);
}

tree::TerminalNode* gramaticaParser::ComandoScanContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}

tree::TerminalNode* gramaticaParser::ComandoScanContext::PONTOV() {
  return getToken(gramaticaParser::PONTOV, 0);
}


size_t gramaticaParser::ComandoScanContext::getRuleIndex() const {
  return gramaticaParser::RuleComandoScan;
}

void gramaticaParser::ComandoScanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComandoScan(this);
}

void gramaticaParser::ComandoScanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComandoScan(this);
}


antlrcpp::Any gramaticaParser::ComandoScanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitComandoScan(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ComandoScanContext* gramaticaParser::comandoScan() {
  ComandoScanContext *_localctx = _tracker.createInstance<ComandoScanContext>(_ctx, getState());
  enterRule(_localctx, 46, gramaticaParser::RuleComandoScan);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(gramaticaParser::SCAN);
    setState(236);
    match(gramaticaParser::L_PARENTESE);
    setState(237);
    acesso();
    setState(238);
    match(gramaticaParser::R_PARENTESE);
    setState(239);
    match(gramaticaParser::PONTOV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaracaoFuncaoContext ------------------------------------------------------------------

gramaticaParser::DeclaracaoFuncaoContext::DeclaracaoFuncaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::TipoContext* gramaticaParser::DeclaracaoFuncaoContext::tipo() {
  return getRuleContext<gramaticaParser::TipoContext>(0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoFuncaoContext::ID() {
  return getToken(gramaticaParser::ID, 0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoFuncaoContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

tree::TerminalNode* gramaticaParser::DeclaracaoFuncaoContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}

gramaticaParser::BlocoFuncaoContext* gramaticaParser::DeclaracaoFuncaoContext::blocoFuncao() {
  return getRuleContext<gramaticaParser::BlocoFuncaoContext>(0);
}

gramaticaParser::ParametrosContext* gramaticaParser::DeclaracaoFuncaoContext::parametros() {
  return getRuleContext<gramaticaParser::ParametrosContext>(0);
}


size_t gramaticaParser::DeclaracaoFuncaoContext::getRuleIndex() const {
  return gramaticaParser::RuleDeclaracaoFuncao;
}

void gramaticaParser::DeclaracaoFuncaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaracaoFuncao(this);
}

void gramaticaParser::DeclaracaoFuncaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaracaoFuncao(this);
}


antlrcpp::Any gramaticaParser::DeclaracaoFuncaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitDeclaracaoFuncao(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::DeclaracaoFuncaoContext* gramaticaParser::declaracaoFuncao() {
  DeclaracaoFuncaoContext *_localctx = _tracker.createInstance<DeclaracaoFuncaoContext>(_ctx, getState());
  enterRule(_localctx, 48, gramaticaParser::RuleDeclaracaoFuncao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    tipo();
    setState(242);
    match(gramaticaParser::ID);
    setState(243);
    match(gramaticaParser::L_PARENTESE);
    setState(245);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << gramaticaParser::TK_INT)
      | (1ULL << gramaticaParser::TK_FLOAT)
      | (1ULL << gramaticaParser::TK_STRING)
      | (1ULL << gramaticaParser::TK_CHAR)
      | (1ULL << gramaticaParser::ID))) != 0)) {
      setState(244);
      parametros();
    }
    setState(247);
    match(gramaticaParser::R_PARENTESE);
    setState(248);
    blocoFuncao();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametrosContext ------------------------------------------------------------------

gramaticaParser::ParametrosContext::ParametrosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramaticaParser::ParametroContext *> gramaticaParser::ParametrosContext::parametro() {
  return getRuleContexts<gramaticaParser::ParametroContext>();
}

gramaticaParser::ParametroContext* gramaticaParser::ParametrosContext::parametro(size_t i) {
  return getRuleContext<gramaticaParser::ParametroContext>(i);
}

std::vector<tree::TerminalNode *> gramaticaParser::ParametrosContext::VIRGULA() {
  return getTokens(gramaticaParser::VIRGULA);
}

tree::TerminalNode* gramaticaParser::ParametrosContext::VIRGULA(size_t i) {
  return getToken(gramaticaParser::VIRGULA, i);
}


size_t gramaticaParser::ParametrosContext::getRuleIndex() const {
  return gramaticaParser::RuleParametros;
}

void gramaticaParser::ParametrosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametros(this);
}

void gramaticaParser::ParametrosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametros(this);
}


antlrcpp::Any gramaticaParser::ParametrosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitParametros(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ParametrosContext* gramaticaParser::parametros() {
  ParametrosContext *_localctx = _tracker.createInstance<ParametrosContext>(_ctx, getState());
  enterRule(_localctx, 50, gramaticaParser::RuleParametros);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    parametro();
    setState(255);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramaticaParser::VIRGULA) {
      setState(251);
      match(gramaticaParser::VIRGULA);
      setState(252);
      parametro();
      setState(257);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametroContext ------------------------------------------------------------------

gramaticaParser::ParametroContext::ParametroContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

gramaticaParser::TipoContext* gramaticaParser::ParametroContext::tipo() {
  return getRuleContext<gramaticaParser::TipoContext>(0);
}

tree::TerminalNode* gramaticaParser::ParametroContext::ID() {
  return getToken(gramaticaParser::ID, 0);
}


size_t gramaticaParser::ParametroContext::getRuleIndex() const {
  return gramaticaParser::RuleParametro;
}

void gramaticaParser::ParametroContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametro(this);
}

void gramaticaParser::ParametroContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametro(this);
}


antlrcpp::Any gramaticaParser::ParametroContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitParametro(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ParametroContext* gramaticaParser::parametro() {
  ParametroContext *_localctx = _tracker.createInstance<ParametroContext>(_ctx, getState());
  enterRule(_localctx, 52, gramaticaParser::RuleParametro);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    tipo();
    setState(259);
    match(gramaticaParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocoFuncaoContext ------------------------------------------------------------------

gramaticaParser::BlocoFuncaoContext::BlocoFuncaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::BlocoFuncaoContext::L_CHAVE() {
  return getToken(gramaticaParser::L_CHAVE, 0);
}

gramaticaParser::ComandoRetornoContext* gramaticaParser::BlocoFuncaoContext::comandoRetorno() {
  return getRuleContext<gramaticaParser::ComandoRetornoContext>(0);
}

tree::TerminalNode* gramaticaParser::BlocoFuncaoContext::R_CHAVE() {
  return getToken(gramaticaParser::R_CHAVE, 0);
}

std::vector<gramaticaParser::ComandoContext *> gramaticaParser::BlocoFuncaoContext::comando() {
  return getRuleContexts<gramaticaParser::ComandoContext>();
}

gramaticaParser::ComandoContext* gramaticaParser::BlocoFuncaoContext::comando(size_t i) {
  return getRuleContext<gramaticaParser::ComandoContext>(i);
}


size_t gramaticaParser::BlocoFuncaoContext::getRuleIndex() const {
  return gramaticaParser::RuleBlocoFuncao;
}

void gramaticaParser::BlocoFuncaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlocoFuncao(this);
}

void gramaticaParser::BlocoFuncaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlocoFuncao(this);
}


antlrcpp::Any gramaticaParser::BlocoFuncaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitBlocoFuncao(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::BlocoFuncaoContext* gramaticaParser::blocoFuncao() {
  BlocoFuncaoContext *_localctx = _tracker.createInstance<BlocoFuncaoContext>(_ctx, getState());
  enterRule(_localctx, 54, gramaticaParser::RuleBlocoFuncao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(gramaticaParser::L_CHAVE);
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << gramaticaParser::IF)
      | (1ULL << gramaticaParser::WHILE)
      | (1ULL << gramaticaParser::TK_INT)
      | (1ULL << gramaticaParser::TK_FLOAT)
      | (1ULL << gramaticaParser::TK_STRING)
      | (1ULL << gramaticaParser::TK_CHAR)
      | (1ULL << gramaticaParser::PRINT)
      | (1ULL << gramaticaParser::SCAN)
      | (1ULL << gramaticaParser::ID))) != 0)) {
      setState(262);
      comando();
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(268);
    comandoRetorno();
    setState(269);
    match(gramaticaParser::R_CHAVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComandoRetornoContext ------------------------------------------------------------------

gramaticaParser::ComandoRetornoContext::ComandoRetornoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::ComandoRetornoContext::RETURN() {
  return getToken(gramaticaParser::RETURN, 0);
}

gramaticaParser::ExpressaoContext* gramaticaParser::ComandoRetornoContext::expressao() {
  return getRuleContext<gramaticaParser::ExpressaoContext>(0);
}

tree::TerminalNode* gramaticaParser::ComandoRetornoContext::PONTOV() {
  return getToken(gramaticaParser::PONTOV, 0);
}


size_t gramaticaParser::ComandoRetornoContext::getRuleIndex() const {
  return gramaticaParser::RuleComandoRetorno;
}

void gramaticaParser::ComandoRetornoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComandoRetorno(this);
}

void gramaticaParser::ComandoRetornoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComandoRetorno(this);
}


antlrcpp::Any gramaticaParser::ComandoRetornoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitComandoRetorno(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ComandoRetornoContext* gramaticaParser::comandoRetorno() {
  ComandoRetornoContext *_localctx = _tracker.createInstance<ComandoRetornoContext>(_ctx, getState());
  enterRule(_localctx, 56, gramaticaParser::RuleComandoRetorno);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(gramaticaParser::RETURN);
    setState(272);
    expressao();
    setState(273);
    match(gramaticaParser::PONTOV);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChamadaFuncaoContext ------------------------------------------------------------------

gramaticaParser::ChamadaFuncaoContext::ChamadaFuncaoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::ChamadaFuncaoContext::ID() {
  return getToken(gramaticaParser::ID, 0);
}

tree::TerminalNode* gramaticaParser::ChamadaFuncaoContext::L_PARENTESE() {
  return getToken(gramaticaParser::L_PARENTESE, 0);
}

tree::TerminalNode* gramaticaParser::ChamadaFuncaoContext::R_PARENTESE() {
  return getToken(gramaticaParser::R_PARENTESE, 0);
}

gramaticaParser::ArgumentosContext* gramaticaParser::ChamadaFuncaoContext::argumentos() {
  return getRuleContext<gramaticaParser::ArgumentosContext>(0);
}


size_t gramaticaParser::ChamadaFuncaoContext::getRuleIndex() const {
  return gramaticaParser::RuleChamadaFuncao;
}

void gramaticaParser::ChamadaFuncaoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChamadaFuncao(this);
}

void gramaticaParser::ChamadaFuncaoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChamadaFuncao(this);
}


antlrcpp::Any gramaticaParser::ChamadaFuncaoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitChamadaFuncao(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ChamadaFuncaoContext* gramaticaParser::chamadaFuncao() {
  ChamadaFuncaoContext *_localctx = _tracker.createInstance<ChamadaFuncaoContext>(_ctx, getState());
  enterRule(_localctx, 58, gramaticaParser::RuleChamadaFuncao);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(gramaticaParser::ID);
    setState(276);
    match(gramaticaParser::L_PARENTESE);
    setState(278);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << gramaticaParser::NUM_INT)
      | (1ULL << gramaticaParser::NUM_FLOAT)
      | (1ULL << gramaticaParser::STRING)
      | (1ULL << gramaticaParser::CHAR)
      | (1ULL << gramaticaParser::L_PARENTESE)
      | (1ULL << gramaticaParser::ID))) != 0)) {
      setState(277);
      argumentos();
    }
    setState(280);
    match(gramaticaParser::R_PARENTESE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentosContext ------------------------------------------------------------------

gramaticaParser::ArgumentosContext::ArgumentosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<gramaticaParser::ExpressaoContext *> gramaticaParser::ArgumentosContext::expressao() {
  return getRuleContexts<gramaticaParser::ExpressaoContext>();
}

gramaticaParser::ExpressaoContext* gramaticaParser::ArgumentosContext::expressao(size_t i) {
  return getRuleContext<gramaticaParser::ExpressaoContext>(i);
}

std::vector<tree::TerminalNode *> gramaticaParser::ArgumentosContext::VIRGULA() {
  return getTokens(gramaticaParser::VIRGULA);
}

tree::TerminalNode* gramaticaParser::ArgumentosContext::VIRGULA(size_t i) {
  return getToken(gramaticaParser::VIRGULA, i);
}


size_t gramaticaParser::ArgumentosContext::getRuleIndex() const {
  return gramaticaParser::RuleArgumentos;
}

void gramaticaParser::ArgumentosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentos(this);
}

void gramaticaParser::ArgumentosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentos(this);
}


antlrcpp::Any gramaticaParser::ArgumentosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitArgumentos(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::ArgumentosContext* gramaticaParser::argumentos() {
  ArgumentosContext *_localctx = _tracker.createInstance<ArgumentosContext>(_ctx, getState());
  enterRule(_localctx, 60, gramaticaParser::RuleArgumentos);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    expressao();
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == gramaticaParser::VIRGULA) {
      setState(283);
      match(gramaticaParser::VIRGULA);
      setState(284);
      expressao();
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AcessoContext ------------------------------------------------------------------

gramaticaParser::AcessoContext::AcessoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> gramaticaParser::AcessoContext::ID() {
  return getTokens(gramaticaParser::ID);
}

tree::TerminalNode* gramaticaParser::AcessoContext::ID(size_t i) {
  return getToken(gramaticaParser::ID, i);
}


size_t gramaticaParser::AcessoContext::getRuleIndex() const {
  return gramaticaParser::RuleAcesso;
}

void gramaticaParser::AcessoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcesso(this);
}

void gramaticaParser::AcessoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcesso(this);
}


antlrcpp::Any gramaticaParser::AcessoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitAcesso(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::AcessoContext* gramaticaParser::acesso() {
  AcessoContext *_localctx = _tracker.createInstance<AcessoContext>(_ctx, getState());
  enterRule(_localctx, 62, gramaticaParser::RuleAcesso);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(290);
      match(gramaticaParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(291);
      match(gramaticaParser::ID);
      setState(292);
      match(gramaticaParser::T__0);
      setState(293);
      match(gramaticaParser::ID);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TipoContext ------------------------------------------------------------------

gramaticaParser::TipoContext::TipoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* gramaticaParser::TipoContext::TK_INT() {
  return getToken(gramaticaParser::TK_INT, 0);
}

tree::TerminalNode* gramaticaParser::TipoContext::TK_FLOAT() {
  return getToken(gramaticaParser::TK_FLOAT, 0);
}

tree::TerminalNode* gramaticaParser::TipoContext::TK_STRING() {
  return getToken(gramaticaParser::TK_STRING, 0);
}

tree::TerminalNode* gramaticaParser::TipoContext::TK_CHAR() {
  return getToken(gramaticaParser::TK_CHAR, 0);
}

tree::TerminalNode* gramaticaParser::TipoContext::ID() {
  return getToken(gramaticaParser::ID, 0);
}


size_t gramaticaParser::TipoContext::getRuleIndex() const {
  return gramaticaParser::RuleTipo;
}

void gramaticaParser::TipoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTipo(this);
}

void gramaticaParser::TipoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<gramaticaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTipo(this);
}


antlrcpp::Any gramaticaParser::TipoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<gramaticaVisitor*>(visitor))
    return parserVisitor->visitTipo(this);
  else
    return visitor->visitChildren(this);
}

gramaticaParser::TipoContext* gramaticaParser::tipo() {
  TipoContext *_localctx = _tracker.createInstance<TipoContext>(_ctx, getState());
  enterRule(_localctx, 64, gramaticaParser::RuleTipo);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << gramaticaParser::TK_INT)
      | (1ULL << gramaticaParser::TK_FLOAT)
      | (1ULL << gramaticaParser::TK_STRING)
      | (1ULL << gramaticaParser::TK_CHAR)
      | (1ULL << gramaticaParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> gramaticaParser::_decisionToDFA;
atn::PredictionContextCache gramaticaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN gramaticaParser::_atn;
std::vector<uint16_t> gramaticaParser::_serializedATN;

std::vector<std::string> gramaticaParser::_ruleNames = {
  "programa", "declaracaoClasse", "corpoClasse", "blocoStart", "bloco", 
  "comando", "declaracaoVariavel", "atribuicao", "estruturaWhile", "estruturaIf", 
  "estruturaElsif", "estruturaElse", "condicao", "condicaoAnd", "condicaoNot", 
  "condicaoPrimaria", "operadorComparacao", "novaInstancia", "expressao", 
  "expressaoSoma", "expressaoProduto", "expressaoPrimaria", "comandoPrint", 
  "comandoScan", "declaracaoFuncao", "parametros", "parametro", "blocoFuncao", 
  "comandoRetorno", "chamadaFuncao", "argumentos", "acesso", "tipo"
};

std::vector<std::string> gramaticaParser::_literalNames = {
  "", "'.'", "'start'", "", "", "", "", "'{'", "'}'", "'('", "')'", "','", 
  "';'", "'&&'", "'||'", "'!'", "'=='", "'!='", "'<'", "'>'", "'>='", "'<='", 
  "'+'", "'-'", "'*'", "'/'", "'='", "'if'", "'else'", "'while'", "'return'", 
  "'new'", "'int'", "'float'", "'string'", "'char'", "'class'", "'printf'", 
  "'scanf'"
};

std::vector<std::string> gramaticaParser::_symbolicNames = {
  "", "", "START", "NUM_INT", "NUM_FLOAT", "STRING", "CHAR", "L_CHAVE", 
  "R_CHAVE", "L_PARENTESE", "R_PARENTESE", "VIRGULA", "PONTOV", "AND", "OR", 
  "NOT", "IGUAL", "DIFF", "MENOR", "MAIOR", "MAIOR_IGUAL", "MENOR_IGUAL", 
  "SOMA", "SUBTRACAO", "MULTIPLICACAO", "DIVISAO", "RECEBA", "IF", "ELSE", 
  "WHILE", "RETURN", "NEW", "TK_INT", "TK_FLOAT", "TK_STRING", "TK_CHAR", 
  "CLASS", "PRINT", "SCAN", "ID", "ESPACO", "COMENTARIO"
};

dfa::Vocabulary gramaticaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> gramaticaParser::_tokenNames;

gramaticaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2b, 0x12d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x3, 0x2, 0x7, 0x2, 0x46, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x49, 
    0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x4c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x4f, 
    0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x58, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x5b, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x66, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x69, 
    0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x73, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x7a, 0xa, 0x8, 0x5, 0x8, 0x7c, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x91, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x94, 0xb, 0xb, 0x3, 0xb, 0x5, 0xb, 0x97, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x7, 0xe, 0xa6, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xa9, 0xb, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xae, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xb1, 
    0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xb6, 0xa, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xc1, 0xa, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xcf, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0xd2, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0xd7, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xda, 0xb, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xe6, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0xf8, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x100, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x103, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x10a, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0x10d, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x119, 
    0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 
    0x20, 0x120, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x123, 0xb, 0x20, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x129, 0xa, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x2, 0x2, 0x23, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x2, 0x6, 0x3, 0x2, 0x12, 0x17, 0x3, 0x2, 
    0x18, 0x19, 0x3, 0x2, 0x1a, 0x1b, 0x4, 0x2, 0x22, 0x25, 0x29, 0x29, 
    0x2, 0x12b, 0x2, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x60, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0xc, 0x72, 0x3, 0x2, 0x2, 0x2, 0xe, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x28, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x30, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x34, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x104, 0x3, 0x2, 0x2, 0x2, 0x38, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x111, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x115, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x128, 0x3, 0x2, 0x2, 0x2, 0x42, 0x12a, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x46, 0x5, 0x4, 0x3, 0x2, 0x45, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x49, 0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4c, 0x5, 0x32, 0x1a, 0x2, 
    0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x5, 
    0x8, 0x5, 0x2, 0x51, 0x52, 0x7, 0x2, 0x2, 0x3, 0x52, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x54, 0x7, 0x26, 0x2, 0x2, 0x54, 0x55, 0x7, 0x29, 0x2, 
    0x2, 0x55, 0x59, 0x7, 0x9, 0x2, 0x2, 0x56, 0x58, 0x5, 0x6, 0x4, 0x2, 
    0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x59, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 
    0xa, 0x2, 0x2, 0x5d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0xe, 
    0x8, 0x2, 0x5f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x4, 0x2, 
    0x2, 0x61, 0x62, 0x5, 0xa, 0x6, 0x2, 0x62, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x67, 0x7, 0x9, 0x2, 0x2, 0x64, 0x66, 0x5, 0xc, 0x7, 0x2, 0x65, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0xa, 
    0x2, 0x2, 0x6b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x73, 0x5, 0xe, 0x8, 
    0x2, 0x6d, 0x73, 0x5, 0x10, 0x9, 0x2, 0x6e, 0x73, 0x5, 0x12, 0xa, 0x2, 
    0x6f, 0x73, 0x5, 0x14, 0xb, 0x2, 0x70, 0x73, 0x5, 0x2e, 0x18, 0x2, 0x71, 
    0x73, 0x5, 0x30, 0x19, 0x2, 0x72, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0xd, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x5, 0x42, 0x22, 
    0x2, 0x75, 0x7b, 0x7, 0x29, 0x2, 0x2, 0x76, 0x79, 0x7, 0x1c, 0x2, 0x2, 
    0x77, 0x7a, 0x5, 0x24, 0x13, 0x2, 0x78, 0x7a, 0x5, 0x26, 0x14, 0x2, 
    0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 
    0xe, 0x2, 0x2, 0x7e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x5, 0x40, 
    0x21, 0x2, 0x80, 0x81, 0x7, 0x1c, 0x2, 0x2, 0x81, 0x82, 0x5, 0x26, 0x14, 
    0x2, 0x82, 0x83, 0x7, 0xe, 0x2, 0x2, 0x83, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x85, 0x7, 0x1f, 0x2, 0x2, 0x85, 0x86, 0x7, 0xb, 0x2, 0x2, 0x86, 
    0x87, 0x5, 0x1a, 0xe, 0x2, 0x87, 0x88, 0x7, 0xc, 0x2, 0x2, 0x88, 0x89, 
    0x5, 0xa, 0x6, 0x2, 0x89, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 
    0x1d, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0xb, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x1a, 
    0xe, 0x2, 0x8d, 0x8e, 0x7, 0xc, 0x2, 0x2, 0x8e, 0x92, 0x5, 0xa, 0x6, 
    0x2, 0x8f, 0x91, 0x5, 0x16, 0xc, 0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x91, 0x94, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x5, 0x18, 0xd, 0x2, 0x96, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x99, 0x7, 0x1e, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x1d, 0x2, 
    0x2, 0x9a, 0x9b, 0x7, 0xb, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x1a, 0xe, 0x2, 
    0x9c, 0x9d, 0x7, 0xc, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0xa, 0x6, 0x2, 0x9e, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x1e, 0x2, 0x2, 0xa0, 0xa1, 
    0x5, 0xa, 0x6, 0x2, 0xa1, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa7, 0x5, 
    0x1c, 0xf, 0x2, 0xa3, 0xa4, 0x7, 0x10, 0x2, 0x2, 0xa4, 0xa6, 0x5, 0x1c, 
    0xf, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0xaf, 0x5, 0x1e, 0x10, 0x2, 0xab, 0xac, 0x7, 0xf, 0x2, 0x2, 0xac, 0xae, 
    0x5, 0x1e, 0x10, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb3, 0x7, 0x11, 0x2, 0x2, 0xb3, 0xb6, 0x5, 0x1e, 0x10, 0x2, 
    0xb4, 0xb6, 0x5, 0x20, 0x11, 0x2, 0xb5, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 
    0x7, 0xb, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x1a, 0xe, 0x2, 0xb9, 0xba, 0x7, 
    0xc, 0x2, 0x2, 0xba, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xc1, 0x5, 0x40, 
    0x21, 0x2, 0xbc, 0xbd, 0x5, 0x26, 0x14, 0x2, 0xbd, 0xbe, 0x5, 0x22, 
    0x12, 0x2, 0xbe, 0xbf, 0x5, 0x26, 0x14, 0x2, 0xbf, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc3, 0x9, 0x2, 0x2, 0x2, 0xc3, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 
    0x7, 0x21, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x29, 0x2, 0x2, 0xc6, 0xc7, 0x7, 
    0xb, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0xc, 0x2, 0x2, 0xc8, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xc9, 0xca, 0x5, 0x28, 0x15, 0x2, 0xca, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xd0, 0x5, 0x2a, 0x16, 0x2, 0xcc, 0xcd, 0x9, 0x3, 0x2, 0x2, 
    0xcd, 0xcf, 0x5, 0x2a, 0x16, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xd1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0xd8, 0x5, 0x2c, 0x17, 0x2, 0xd4, 0xd5, 0x9, 0x4, 
    0x2, 0x2, 0xd5, 0xd7, 0x5, 0x2c, 0x17, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xe6, 0x5, 0x3c, 0x1f, 0x2, 0xdc, 0xe6, 
    0x7, 0x5, 0x2, 0x2, 0xdd, 0xe6, 0x7, 0x6, 0x2, 0x2, 0xde, 0xe6, 0x7, 
    0x7, 0x2, 0x2, 0xdf, 0xe6, 0x7, 0x8, 0x2, 0x2, 0xe0, 0xe6, 0x5, 0x40, 
    0x21, 0x2, 0xe1, 0xe2, 0x7, 0xb, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x26, 0x14, 
    0x2, 0xe3, 0xe4, 0x7, 0xc, 0x2, 0x2, 0xe4, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xe5, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xe6, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x27, 
    0x2, 0x2, 0xe8, 0xe9, 0x7, 0xb, 0x2, 0x2, 0xe9, 0xea, 0x5, 0x26, 0x14, 
    0x2, 0xea, 0xeb, 0x7, 0xc, 0x2, 0x2, 0xeb, 0xec, 0x7, 0xe, 0x2, 0x2, 
    0xec, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x7, 0x28, 0x2, 0x2, 0xee, 
    0xef, 0x7, 0xb, 0x2, 0x2, 0xef, 0xf0, 0x5, 0x40, 0x21, 0x2, 0xf0, 0xf1, 
    0x7, 0xc, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0xe, 0x2, 0x2, 0xf2, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x42, 0x22, 0x2, 0xf4, 0xf5, 0x7, 0x29, 
    0x2, 0x2, 0xf5, 0xf7, 0x7, 0xb, 0x2, 0x2, 0xf6, 0xf8, 0x5, 0x34, 0x1b, 
    0x2, 0xf7, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0xc, 0x2, 0x2, 0xfa, 
    0xfb, 0x5, 0x38, 0x1d, 0x2, 0xfb, 0x33, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x101, 
    0x5, 0x36, 0x1c, 0x2, 0xfd, 0xfe, 0x7, 0xd, 0x2, 0x2, 0xfe, 0x100, 0x5, 
    0x36, 0x1c, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x35, 0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0x105, 0x5, 0x42, 0x22, 0x2, 0x105, 0x106, 0x7, 0x29, 0x2, 
    0x2, 0x106, 0x37, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10b, 0x7, 0x9, 0x2, 0x2, 
    0x108, 0x10a, 0x5, 0xc, 0x7, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10e, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x3a, 0x1e, 0x2, 
    0x10f, 0x110, 0x7, 0xa, 0x2, 0x2, 0x110, 0x39, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x112, 0x7, 0x20, 0x2, 0x2, 0x112, 0x113, 0x5, 0x26, 0x14, 0x2, 0x113, 
    0x114, 0x7, 0xe, 0x2, 0x2, 0x114, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 
    0x7, 0x29, 0x2, 0x2, 0x116, 0x118, 0x7, 0xb, 0x2, 0x2, 0x117, 0x119, 
    0x5, 0x3e, 0x20, 0x2, 0x118, 0x117, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 
    0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 
    0x7, 0xc, 0x2, 0x2, 0x11b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x121, 0x5, 
    0x26, 0x14, 0x2, 0x11d, 0x11e, 0x7, 0xd, 0x2, 0x2, 0x11e, 0x120, 0x5, 
    0x26, 0x14, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x129, 0x7, 0x29, 0x2, 0x2, 0x125, 0x126, 0x7, 0x29, 
    0x2, 0x2, 0x126, 0x127, 0x7, 0x3, 0x2, 0x2, 0x127, 0x129, 0x7, 0x29, 
    0x2, 0x2, 0x128, 0x124, 0x3, 0x2, 0x2, 0x2, 0x128, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x41, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x9, 0x5, 0x2, 
    0x2, 0x12b, 0x43, 0x3, 0x2, 0x2, 0x2, 0x18, 0x47, 0x4d, 0x59, 0x67, 
    0x72, 0x79, 0x7b, 0x92, 0x96, 0xa7, 0xaf, 0xb5, 0xc0, 0xd0, 0xd8, 0xe5, 
    0xf7, 0x101, 0x10b, 0x118, 0x121, 0x128, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

gramaticaParser::Initializer gramaticaParser::_init;
