#include "listener.h"
#include <iostream>

void Listener::syntaxError(antlr4::Recognizer *recognizer,
                                   antlr4::Token *offendingSymbol,
                                   size_t line,
                                   size_t charPositionInLine,
                                   const std::string &msg,
                                   std::exception_ptr e) {
    std::cerr << "ERRO: Linha " << line << ":" << charPositionInLine
              << " - proximo a '" << offendingSymbol->getText() << "'" << std::endl;
}