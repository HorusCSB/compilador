
// Generated from gramatica.g4 by ANTLR 4.13.2


#include "gramaticaListener.h"
#include "gramaticaVisitor.h"

#include "gramaticaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GramaticaParserStaticData final {
  GramaticaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GramaticaParserStaticData(const GramaticaParserStaticData&) = delete;
  GramaticaParserStaticData(GramaticaParserStaticData&&) = delete;
  GramaticaParserStaticData& operator=(const GramaticaParserStaticData&) = delete;
  GramaticaParserStaticData& operator=(GramaticaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gramaticaParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<GramaticaParserStaticData> gramaticaParserStaticData = nullptr;

void gramaticaParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (gramaticaParserStaticData != nullptr) {
    return;
  }
#else
  assert(gramaticaParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GramaticaParserStaticData>(
    std::vector<std::string>{
      "programa", "declaracaoClasse", "corpoClasse", "blocoStart", "bloco", 
      "comando", "declaracaoVariavel", "atribuicao", "estruturaWhile", "estruturaIf", 
      "estruturaElsif", "estruturaElse", "condicao", "condicaoAnd", "condicaoNot", 
      "condicaoPrimaria", "operadorComparacao", "novaInstancia", "expressao", 
      "expressaoSoma", "expressaoProduto", "expressaoPrimaria", "comandoPrint", 
      "comandoScan", "declaracaoFuncao", "parametros", "parametro", "blocoFuncao", 
      "comandoRetorno", "chamadaFuncao", "argumentos", "acesso", "tipo"
    },
    std::vector<std::string>{
      "", "'.'", "'start'", "", "", "", "", "'{'", "'}'", "'('", "')'", 
      "','", "';'", "'&&'", "'||'", "'!'", "'=='", "'!='", "'<'", "'>'", 
      "'>='", "'<='", "'+'", "'-'", "'*'", "'/'", "'='", "'if'", "'else'", 
      "'while'", "'return'", "'new'", "'int'", "'float'", "'string'", "'char'", 
      "'class'", "'printf'", "'scanf'"
    },
    std::vector<std::string>{
      "", "", "START", "NUM_INT", "NUM_FLOAT", "STRING", "CHAR", "L_CHAVE", 
      "R_CHAVE", "L_PARENTESE", "R_PARENTESE", "VIRGULA", "PONTOV", "AND", 
      "OR", "NOT", "IGUAL", "DIFF", "MENOR", "MAIOR", "MAIOR_IGUAL", "MENOR_IGUAL", 
      "SOMA", "SUBTRACAO", "MULTIPLICACAO", "DIVISAO", "RECEBA", "IF", "ELSE", 
      "WHILE", "RETURN", "NEW", "TK_INT", "TK_FLOAT", "TK_STRING", "TK_CHAR", 
      "CLASS", "PRINT", "SCAN", "ID", "ESPACO", "COMENTARIO"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,41,299,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,5,0,68,8,0,10,0,12,0,71,
  	9,0,1,0,5,0,74,8,0,10,0,12,0,77,9,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,5,1,86,
  	8,1,10,1,12,1,89,9,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,4,1,4,5,4,100,8,4,
  	10,4,12,4,103,9,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,113,8,5,1,6,1,6,
  	1,6,1,6,1,6,3,6,120,8,6,3,6,122,8,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,5,9,143,8,9,10,9,12,9,146,9,
  	9,1,9,3,9,149,8,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,
  	12,1,12,1,12,5,12,164,8,12,10,12,12,12,167,9,12,1,13,1,13,1,13,5,13,172,
  	8,13,10,13,12,13,175,9,13,1,14,1,14,1,14,3,14,180,8,14,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,3,15,191,8,15,1,16,1,16,1,17,1,17,1,17,
  	1,17,1,17,1,18,1,18,1,19,1,19,1,19,5,19,205,8,19,10,19,12,19,208,9,19,
  	1,20,1,20,1,20,5,20,213,8,20,10,20,12,20,216,9,20,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,3,21,228,8,21,1,22,1,22,1,22,1,22,1,22,
  	1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,3,24,246,8,24,
  	1,24,1,24,1,24,1,25,1,25,1,25,5,25,254,8,25,10,25,12,25,257,9,25,1,26,
  	1,26,1,26,1,27,1,27,5,27,264,8,27,10,27,12,27,267,9,27,1,27,1,27,1,27,
  	1,28,1,28,1,28,1,28,1,29,1,29,1,29,3,29,279,8,29,1,29,1,29,1,30,1,30,
  	1,30,5,30,286,8,30,10,30,12,30,289,9,30,1,31,1,31,1,31,1,31,3,31,295,
  	8,31,1,32,1,32,1,32,0,0,33,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,0,4,1,0,16,21,1,0,
  	22,23,1,0,24,25,2,0,32,35,39,39,297,0,69,1,0,0,0,2,81,1,0,0,0,4,92,1,
  	0,0,0,6,94,1,0,0,0,8,97,1,0,0,0,10,112,1,0,0,0,12,114,1,0,0,0,14,125,
  	1,0,0,0,16,130,1,0,0,0,18,136,1,0,0,0,20,150,1,0,0,0,22,157,1,0,0,0,24,
  	160,1,0,0,0,26,168,1,0,0,0,28,179,1,0,0,0,30,190,1,0,0,0,32,192,1,0,0,
  	0,34,194,1,0,0,0,36,199,1,0,0,0,38,201,1,0,0,0,40,209,1,0,0,0,42,227,
  	1,0,0,0,44,229,1,0,0,0,46,235,1,0,0,0,48,241,1,0,0,0,50,250,1,0,0,0,52,
  	258,1,0,0,0,54,261,1,0,0,0,56,271,1,0,0,0,58,275,1,0,0,0,60,282,1,0,0,
  	0,62,294,1,0,0,0,64,296,1,0,0,0,66,68,3,2,1,0,67,66,1,0,0,0,68,71,1,0,
  	0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,75,1,0,0,0,71,69,1,0,0,0,72,74,3,48,
  	24,0,73,72,1,0,0,0,74,77,1,0,0,0,75,73,1,0,0,0,75,76,1,0,0,0,76,78,1,
  	0,0,0,77,75,1,0,0,0,78,79,3,6,3,0,79,80,5,0,0,1,80,1,1,0,0,0,81,82,5,
  	36,0,0,82,83,5,39,0,0,83,87,5,7,0,0,84,86,3,4,2,0,85,84,1,0,0,0,86,89,
  	1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,90,1,0,0,0,89,87,1,0,0,0,90,91,
  	5,8,0,0,91,3,1,0,0,0,92,93,3,12,6,0,93,5,1,0,0,0,94,95,5,2,0,0,95,96,
  	3,8,4,0,96,7,1,0,0,0,97,101,5,7,0,0,98,100,3,10,5,0,99,98,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,101,1,
  	0,0,0,104,105,5,8,0,0,105,9,1,0,0,0,106,113,3,12,6,0,107,113,3,14,7,0,
  	108,113,3,16,8,0,109,113,3,18,9,0,110,113,3,44,22,0,111,113,3,46,23,0,
  	112,106,1,0,0,0,112,107,1,0,0,0,112,108,1,0,0,0,112,109,1,0,0,0,112,110,
  	1,0,0,0,112,111,1,0,0,0,113,11,1,0,0,0,114,115,3,64,32,0,115,121,5,39,
  	0,0,116,119,5,26,0,0,117,120,3,34,17,0,118,120,3,36,18,0,119,117,1,0,
  	0,0,119,118,1,0,0,0,120,122,1,0,0,0,121,116,1,0,0,0,121,122,1,0,0,0,122,
  	123,1,0,0,0,123,124,5,12,0,0,124,13,1,0,0,0,125,126,3,62,31,0,126,127,
  	5,26,0,0,127,128,3,36,18,0,128,129,5,12,0,0,129,15,1,0,0,0,130,131,5,
  	29,0,0,131,132,5,9,0,0,132,133,3,24,12,0,133,134,5,10,0,0,134,135,3,8,
  	4,0,135,17,1,0,0,0,136,137,5,27,0,0,137,138,5,9,0,0,138,139,3,24,12,0,
  	139,140,5,10,0,0,140,144,3,8,4,0,141,143,3,20,10,0,142,141,1,0,0,0,143,
  	146,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,148,1,0,0,0,146,144,1,
  	0,0,0,147,149,3,22,11,0,148,147,1,0,0,0,148,149,1,0,0,0,149,19,1,0,0,
  	0,150,151,5,28,0,0,151,152,5,27,0,0,152,153,5,9,0,0,153,154,3,24,12,0,
  	154,155,5,10,0,0,155,156,3,8,4,0,156,21,1,0,0,0,157,158,5,28,0,0,158,
  	159,3,8,4,0,159,23,1,0,0,0,160,165,3,26,13,0,161,162,5,14,0,0,162,164,
  	3,26,13,0,163,161,1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,0,165,166,1,0,
  	0,0,166,25,1,0,0,0,167,165,1,0,0,0,168,173,3,28,14,0,169,170,5,13,0,0,
  	170,172,3,28,14,0,171,169,1,0,0,0,172,175,1,0,0,0,173,171,1,0,0,0,173,
  	174,1,0,0,0,174,27,1,0,0,0,175,173,1,0,0,0,176,177,5,15,0,0,177,180,3,
  	28,14,0,178,180,3,30,15,0,179,176,1,0,0,0,179,178,1,0,0,0,180,29,1,0,
  	0,0,181,182,5,9,0,0,182,183,3,24,12,0,183,184,5,10,0,0,184,191,1,0,0,
  	0,185,191,3,62,31,0,186,187,3,36,18,0,187,188,3,32,16,0,188,189,3,36,
  	18,0,189,191,1,0,0,0,190,181,1,0,0,0,190,185,1,0,0,0,190,186,1,0,0,0,
  	191,31,1,0,0,0,192,193,7,0,0,0,193,33,1,0,0,0,194,195,5,31,0,0,195,196,
  	5,39,0,0,196,197,5,9,0,0,197,198,5,10,0,0,198,35,1,0,0,0,199,200,3,38,
  	19,0,200,37,1,0,0,0,201,206,3,40,20,0,202,203,7,1,0,0,203,205,3,40,20,
  	0,204,202,1,0,0,0,205,208,1,0,0,0,206,204,1,0,0,0,206,207,1,0,0,0,207,
  	39,1,0,0,0,208,206,1,0,0,0,209,214,3,42,21,0,210,211,7,2,0,0,211,213,
  	3,42,21,0,212,210,1,0,0,0,213,216,1,0,0,0,214,212,1,0,0,0,214,215,1,0,
  	0,0,215,41,1,0,0,0,216,214,1,0,0,0,217,228,3,58,29,0,218,228,5,3,0,0,
  	219,228,5,4,0,0,220,228,5,5,0,0,221,228,5,6,0,0,222,228,3,62,31,0,223,
  	224,5,9,0,0,224,225,3,36,18,0,225,226,5,10,0,0,226,228,1,0,0,0,227,217,
  	1,0,0,0,227,218,1,0,0,0,227,219,1,0,0,0,227,220,1,0,0,0,227,221,1,0,0,
  	0,227,222,1,0,0,0,227,223,1,0,0,0,228,43,1,0,0,0,229,230,5,37,0,0,230,
  	231,5,9,0,0,231,232,3,36,18,0,232,233,5,10,0,0,233,234,5,12,0,0,234,45,
  	1,0,0,0,235,236,5,38,0,0,236,237,5,9,0,0,237,238,3,62,31,0,238,239,5,
  	10,0,0,239,240,5,12,0,0,240,47,1,0,0,0,241,242,3,64,32,0,242,243,5,39,
  	0,0,243,245,5,9,0,0,244,246,3,50,25,0,245,244,1,0,0,0,245,246,1,0,0,0,
  	246,247,1,0,0,0,247,248,5,10,0,0,248,249,3,54,27,0,249,49,1,0,0,0,250,
  	255,3,52,26,0,251,252,5,11,0,0,252,254,3,52,26,0,253,251,1,0,0,0,254,
  	257,1,0,0,0,255,253,1,0,0,0,255,256,1,0,0,0,256,51,1,0,0,0,257,255,1,
  	0,0,0,258,259,3,64,32,0,259,260,5,39,0,0,260,53,1,0,0,0,261,265,5,7,0,
  	0,262,264,3,10,5,0,263,262,1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,265,
  	266,1,0,0,0,266,268,1,0,0,0,267,265,1,0,0,0,268,269,3,56,28,0,269,270,
  	5,8,0,0,270,55,1,0,0,0,271,272,5,30,0,0,272,273,3,36,18,0,273,274,5,12,
  	0,0,274,57,1,0,0,0,275,276,5,39,0,0,276,278,5,9,0,0,277,279,3,60,30,0,
  	278,277,1,0,0,0,278,279,1,0,0,0,279,280,1,0,0,0,280,281,5,10,0,0,281,
  	59,1,0,0,0,282,287,3,36,18,0,283,284,5,11,0,0,284,286,3,36,18,0,285,283,
  	1,0,0,0,286,289,1,0,0,0,287,285,1,0,0,0,287,288,1,0,0,0,288,61,1,0,0,
  	0,289,287,1,0,0,0,290,295,5,39,0,0,291,292,5,39,0,0,292,293,5,1,0,0,293,
  	295,5,39,0,0,294,290,1,0,0,0,294,291,1,0,0,0,295,63,1,0,0,0,296,297,7,
  	3,0,0,297,65,1,0,0,0,22,69,75,87,101,112,119,121,144,148,165,173,179,
  	190,206,214,227,245,255,265,278,287,294
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gramaticaParserStaticData = std::move(staticData);
}

}

gramaticaParser::gramaticaParser(TokenStream *input) : gramaticaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

gramaticaParser::gramaticaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  gramaticaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *gramaticaParserStaticData->atn, gramaticaParserStaticData->decisionToDFA, gramaticaParserStaticData->sharedContextCache, options);
}

gramaticaParser::~gramaticaParser() {
  delete _interpreter;
}

const atn::ATN& gramaticaParser::getATN() const {
  return *gramaticaParserStaticData->atn;
}

std::string gramaticaParser::getGrammarFileName() const {
  return "gramatica.g4";
}

const std::vector<std::string>& gramaticaParser::getRuleNames() const {
  return gramaticaParserStaticData->ruleNames;
}

const dfa::Vocabulary& gramaticaParser::getVocabulary() const {
  return gramaticaParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView gramaticaParser::getSerializedATN() const {
  return gramaticaParserStaticData->serializedATN;
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


std::any gramaticaParser::ProgramaContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & 614180323328) != 0)) {
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


std::any gramaticaParser::DeclaracaoClasseContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & 614180323328) != 0)) {
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


std::any gramaticaParser::CorpoClasseContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::BlocoStartContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::BlocoContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & 1027168272384) != 0)) {
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


std::any gramaticaParser::ComandoContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::DeclaracaoVariavelContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::AtribuicaoContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::EstruturaWhileContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::EstruturaIfContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::EstruturaElsifContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::EstruturaElseContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::CondicaoContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::CondicaoAndContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::CondicaoNotContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::CondicaoPrimariaContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::OperadorComparacaoContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & 4128768) != 0))) {
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


std::any gramaticaParser::NovaInstanciaContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::ExpressaoContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::ExpressaoSomaContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::ExpressaoProdutoContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::ExpressaoPrimariaContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::ComandoPrintContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::ComandoScanContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::DeclaracaoFuncaoContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & 614180323328) != 0)) {
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


std::any gramaticaParser::ParametrosContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::ParametroContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::BlocoFuncaoContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & 1027168272384) != 0)) {
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


std::any gramaticaParser::ComandoRetornoContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::ChamadaFuncaoContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & 549755814520) != 0)) {
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


std::any gramaticaParser::ArgumentosContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::AcessoContext::accept(tree::ParseTreeVisitor *visitor) {
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


std::any gramaticaParser::TipoContext::accept(tree::ParseTreeVisitor *visitor) {
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
      ((1ULL << _la) & 614180323328) != 0))) {
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

void gramaticaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  gramaticaParserInitialize();
#else
  ::antlr4::internal::call_once(gramaticaParserOnceFlag, gramaticaParserInitialize);
#endif
}
