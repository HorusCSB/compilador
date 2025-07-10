#include <iostream>
#include <fstream>
#include <sstream>
#include <filesystem>
#include "antlr4-runtime.h"
#include "../saida/gramaticaLexer.h"
#include "../saida/gramaticaParser.h"
#include "visitor.h"
#include "listener.h"

int main(int argc, const char* argv[]) {
    try{
        std::ifstream stream("exemploCod.txt");
        if (!stream) {
            std::cerr << "Erro ao abrir o arquivo exemploCod.txt\n" << std::filesystem::current_path() << std::endl;;
            return 1;
        }

        std::stringstream buffer;
        buffer << stream.rdbuf();

        antlr4::ANTLRInputStream input(buffer.str());
        gramaticaLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        gramaticaParser parser(&tokens);

        lexer.removeErrorListeners();
        parser.removeErrorListeners();

        Listener* listener = new Listener();
        lexer.addErrorListener(listener);
        parser.addErrorListener(listener);

        antlr4::tree::ParseTree *tree = parser.programa();

        Visitor visitor;
        visitor.visit(tree);
        //visitor.imprimirTabela();
    } catch (const std::exception& e) {
        std::cerr << "Excecao capturada: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Erro inesperado (abort ou erro fatal)" << std::endl;
    }
    return 0;
}
