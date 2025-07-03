
// Generated from gramatica.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  gramaticaLexer : public antlr4::Lexer {
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

  explicit gramaticaLexer(antlr4::CharStream *input);
  ~gramaticaLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

