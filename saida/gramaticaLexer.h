
// Generated from gramatica.g4 by ANTLR 4.13.2

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

  ~gramaticaLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

