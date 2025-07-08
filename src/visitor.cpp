#include "visitor.h"

/*
✓ Verificação de duplicação de variáveis
✓ Verificação de uso sem declaração
✓ Verificação de acesso a atributos inexistentes
✓ Comparação de tipos em expressões

✓ Print da tabela de símbolos (comentado para debugar melhor)
*/

antlrcpp::Any MeuVisitor::visitDeclaracaoClasse(gramaticaParser::DeclaracaoClasseContext *ctx) {
    escopoAtual = ctx->ID()->getText();
    visitChildren(ctx);
    escopoAtual = "global";
    return nullptr;
}

antlrcpp::Any MeuVisitor::visitDeclaracaoFuncao(gramaticaParser::DeclaracaoFuncaoContext *ctx) {
    escopoAtual = ctx->ID()->getText();
    visitChildren(ctx);
    escopoAtual = "global";
    return nullptr;
}

antlrcpp::Any MeuVisitor::visitDeclaracaoVariavel(gramaticaParser::DeclaracaoVariavelContext *ctx) {
    std::string nome = ctx->ID()->getText();
    std::string tipo = ctx->tipo()->getText();
    int linha = ctx->getStart()->getLine();

     // verifica duplicação no escopo atual
    if (tabelaPorEscopo[escopoAtual].count(nome)) {
        std::cerr << "ERRO: Linha " << linha
                  << ": Variavel '" << nome
                  << "' ja declarada no escopo '" << escopoAtual
                  << "'.\n";
    } else {
        Simbolo simb {nome, tipo, escopoAtual, linha};
        tabelaPorEscopo[escopoAtual][nome] = simb;
    }

    return visitChildren(ctx);
}

antlrcpp::Any MeuVisitor::visitAtribuicao(gramaticaParser::AtribuicaoContext *ctx) {
    std::string acesso = ctx->acesso()->getText();
    int linha = ctx->getStart()->getLine();

    if (acesso.find('.') != std::string::npos) {
        auto ponto = acesso.find('.');
        std::string obj = acesso.substr(0, ponto);
        std::string atributo = acesso.substr(ponto+1);

        if (!atributoExiste(obj, atributo)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Atributo '" << atributo
                      << "' nao pertence ao objeto '" << obj
                      << "'.\n";
        }
    } else {
        if (!existeVariavel(acesso)) {
            std::cerr << "ERRO: Linha " << linha
                      << ": Variavel '" << acesso
                      << "' usada sem estar declarada.\n";
        }
    }

    return visitChildren(ctx);
}

antlrcpp::Any MeuVisitor::visitExpressaoPrimaria(gramaticaParser::ExpressaoPrimariaContext *ctx) {
    //se for apenas tipo
    if (ctx->NUM_INT()) return std::string("int");
    if (ctx->NUM_FLOAT()) return std::string("float");
    if (ctx->STRING()) return std::string("string");
    if (ctx->CHAR()) return std::string("char");

    //se for acesso a um atributo de classe
    if (ctx->acesso()) {
        std::string var = ctx->acesso()->getText();
        if (tabelaPorEscopo[escopoAtual].count(var))
            return tabelaPorEscopo[escopoAtual][var].tipo;
    }

    if (ctx->expressao()) {
        return visit(ctx->expressao());
    }

    return std::string("undefined");
}


//AUXILIARES
bool MeuVisitor::existeVariavel(const std::string& nome) {
    return tabelaPorEscopo[escopoAtual].count(nome) || tabelaPorEscopo["global"].count(nome);
}

bool MeuVisitor::atributoExiste(const std::string& obj, const std::string& atributo) {
    if (!existeVariavel(obj)) return false;
    std::string tipo = tabelaPorEscopo[escopoAtual][obj].tipo;
    return tabelaPorEscopo[tipo].count(atributo);
}

void MeuVisitor::imprimirTabela() {
    std::cout << "\nTabela de Simbolos:\n";
    for (const auto& [escopo, simbolos] : tabelaPorEscopo) {
        for (const auto& [nome, simb] : simbolos) {
            std::cout << " - " << nome
                      << " | tipo: " << simb.tipo
                      << " | escopo: " << simb.escopo
                      << " | linha: " << simb.linha
                      << "\n";
        }
    }
}