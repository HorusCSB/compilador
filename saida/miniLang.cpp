#include "MiniLangPTBaseVisitor.h"
#include <iostream>
#include <unordered_map>
#include <stack>
#include <string>

class MiniLangSemantico : public MiniLangPTBaseVisitor {
public:
    using TabelaSimbolos = std::unordered_map<std::string, std::string>;
    std::stack<TabelaSimbolos> escopos;

    MiniLangSemantico() {
        // Escopo global
        escopos.push(TabelaSimbolos());
    }

    TabelaSimbolos& escopoAtual() {
        return escopos.top();
    }

    bool existeVariavel(const std::string& nome) {
        for (auto it = escopos.rbegin(); it != escopos.rend(); ++it) {
            if (it->find(nome) != it->end()) return true;
        }
        return false;
    }

    std::string tipoVariavel(const std::string& nome) {
        for (auto it = escopos.rbegin(); it != escopos.rend(); ++it) {
            auto itVar = it->find(nome);
            if (itVar != it->end()) return itVar->second;
        }
        return "erro";
    }

    // Escopo de bloco
    antlrcpp::Any visitBloco(MiniLangPTParser::BlocoContext *ctx) override {
        escopos.push(TabelaSimbolos());
        visitChildren(ctx);
        escopos.pop();
        return nullptr;
    }

    // Declaração de variável
    antlrcpp::Any visitDeclaracaoVariavel(MiniLangPTParser::DeclaracaoVariavelContext *ctx) override {
        std::string nomeVar = ctx->ID()->getText();
        std::string tipo = ctx->tipo()->getText();

        if (escopoAtual().find(nomeVar) != escopoAtual().end()) {
            std::cerr << "Erro: variável '" << nomeVar << "' já foi declarada neste escopo." << std::endl;
        } else {
            escopoAtual()[nomeVar] = tipo;
        }

        if (ctx->expressao()) {
            std::string tipoExpr = visit(ctx->expressao());
            if (tipoExpr != tipo && tipoExpr != "erro") {
                std::cerr << "Erro: tipo incompatível na inicialização da variável '" << nomeVar << "'." << std::endl;
            }
        }

        return nullptr;
    }

    // Atribuição
    antlrcpp::Any visitAtribuicao(MiniLangPTParser::AtribuicaoContext *ctx) override {
        std::string nomeVar = ctx->acesso()->getText();
        if (!existeVariavel(nomeVar)) {
            std::cerr << "Erro: variável '" << nomeVar << "' não declarada." << std::endl;
            return nullptr;
        }

        std::string tipoVar = tipoVariavel(nomeVar);
        std::string tipoExpr = visit(ctx->expressao());

        if (tipoExpr != tipoVar && tipoExpr != "erro") {
            std::cerr << "Erro: tipo incompatível na atribuição de '" << nomeVar << "'." << std::endl;
        }

        return nullptr;
    }

    // Expressões primárias
    antlrcpp::Any visitExpressaoPrimaria(MiniLangPTParser::ExpressaoPrimariaContext *ctx) override {
        if (ctx->NUM_INT()) return std::string("int");
        if (ctx->NUM_FLOAT()) return std::string("float");
        if (ctx->STRING()) return std::string("string");
        if (ctx->CHAR()) return std::string("char");
        if (ctx->acesso()) {
            std::string nome = ctx->acesso()->getText();
            if (!existeVariavel(nome)) {
                std::cerr << "Erro: variável '" << nome << "' não declarada." << std::endl;
                return std::string("erro");
            }
            return tipoVariavel(nome);
        }
        return visitChildren(ctx);
    }

    // Expressões com soma e subtração
    antlrcpp::Any visitExpressaoSoma(MiniLangPTParser::ExpressaoSomaContext *ctx) override {
        std::string tipoEsq = visit(ctx->expressaoProduto(0));
        for (size_t i = 1; i < ctx->expressaoProduto().size(); ++i) {
            std::string tipoDir = visit(ctx->expressaoProduto(i));
            if (tipoEsq != tipoDir || (tipoEsq != "int" && tipoEsq != "float")) {
                std::cerr << "Erro: tipos incompatíveis em soma/subtração: " << tipoEsq << " e " << tipoDir << std::endl;
                return std::string("erro");
            }
        }
        return tipoEsq;
    }

    // Expressões com multiplicação e divisão
    antlrcpp::Any visitExpressaoProduto(MiniLangPTParser::ExpressaoProdutoContext *ctx) override {
        std::string tipoEsq = visit(ctx->expressaoPrimaria(0));
        for (size_t i = 1; i < ctx->expressaoPrimaria().size(); ++i) {
            std::string tipoDir = visit(ctx->expressaoPrimaria(i));
            if (tipoEsq != tipoDir || (tipoEsq != "int" && tipoEsq != "float")) {
                std::cerr << "Erro: tipos incompatíveis em multiplicação/divisão: " << tipoEsq << " e " << tipoDir << std::endl;
                return std::string("erro");
            }
        }
        return tipoEsq;
    }
};