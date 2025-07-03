#include <iostream>
#include <fstream>
#include <sstream>
#include "antlr4-runtime.h"
#include "../saida/gramaticaLexer.h"
#include "../saida/gramaticaParser.h"
#include "visitor.h"

int main(int argc, const char* argv[]) {
    std::ifstream stream("exemploCod.txt");
    if (!stream) {
        std::cerr << "Erro ao abrir o arquivo exemploCod.txt\n";
        return 1;
    }

    std::stringstream buffer;
    buffer << stream.rdbuf();

    antlr4::ANTLRInputStream input(buffer.str());
    gramaticaLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    gramaticaParser parser(&tokens);

    antlr4::tree::ParseTree *tree = parser.programa();

    MeuVisitor visitor;
    visitor.visit(tree);
    visitor.imprimirTabela();

    return 0;
}
