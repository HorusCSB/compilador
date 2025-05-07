#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// Local para definirmos tipos diferentes de tokens e atribuir numeros a eles
enum class TokenType
{
    KEYWORD,
    IDENTIFIER,
    INTEGER,
    FLOAT,
    OPERATOR,
    PUNCTUATOR,
    UNKNOWN
};

struct Token
{
    TokenType type;
    string value;
    Token(TokenType type, const string &v) : type(type), value(v) {}
};

class LexicalAnalyzer
{
private:
    string input;
    size_t position;
    // associa uma string à um enum, unordered_map é uma tabela hash com tempo O(1)
    unordered_map<string, TokenType> keywords;

    void initKeywords()
    {
        keywords = {
            {"int", TokenType::KEYWORD},
            {"float", TokenType::KEYWORD},
            {"if", TokenType::KEYWORD},
            {"else", TokenType::KEYWORD},
            {"while", TokenType::KEYWORD},
            {"return", TokenType::KEYWORD},
            {"class", TokenType::KEYWORD},
            {"string", TokenType::KEYWORD},
        };
    }

    bool isWhitespace(char c)
    {
        return c == ' ' || c == '\t' || c == '\n' || c == '\r';
    }

    bool isAlphabetical(char c)
    {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }

    bool isDigit(char c)
    {
        return c >= '0' && c <= '9';
    }

    bool isAlphaNumeric(char c)
    {
        return isAlphabetical(c) || isDigit(c);
    }

    // OBS: Não verifica se a primeira letra é um número
    string getNextWord()
    {
        size_t start = position;
        while (position < input.length() && isAlphaNumeric(input[position]))
        {
            position++;
        }
        return input.substr(start, position - start);
    }

    //  OBS: o hasDecimal evita mal formação de float como 1.0.0
    string getNextNumber()
    {
        size_t start = position;
        bool hasDecimal = false;
        while (position < input.length() && (isDigit(input[position]) || input[position] == '.'))
        {
            if (input[position] == '.')
            {
                if (hasDecimal)
                    break;
                hasDecimal = true;
            }
            position++;
        }
        return input.substr(start, position - start);
    }

public:
    // construtor do analisador léxico
    // recebe o código fonte
    // salva na variável input
    // define a posição como 0
    // inicia as keyWords
    LexicalAnalyzer(const string &source)
        : input(source), position(0)
    {
        initKeywords();
    }

    // função para gerar os tokens e armazenar em um vetor
    vector<Token> tokenize()
    {
        vector<Token> tokens;

        // para cada posição do código
        while (position < input.length())
        {
            char currentChar = input[position];

            // pula espaço em branco no inicio do código
            if (isWhitespace(currentChar))
            {
                position++;
                continue;
            }

            // identifica palavras chave que não devem ser começadas em número
            if (isAlphabetical(currentChar))
            {
                string word = getNextWord();

                //cpp retorna vetor.end qd find nao funciona, portanto tem que ser diferente disso
                if (keywords.find(word) != keywords.end())
                {
                    tokens.emplace_back(TokenType::KEYWORD,
                                        word);
                }
                else
                {
                    tokens.emplace_back(
                        TokenType::IDENTIFIER, word);
                }
            }
            // identifica float ou inteiro
            else if (isDigit(currentChar))
            {
                string number = getNextNumber();
                if (number.find('.') != string::npos)
                {
                    tokens.emplace_back(
                        TokenType::FLOAT, number);
                }
                else
                {
                    tokens.emplace_back(
                        TokenType::INTEGER, number);
                }
            }
            // identifica tokens de operação lóǵica
            // OBS: nesse caso não estamos dando cobertura à >= e afins
            else if (currentChar == '+' || currentChar == '-' || currentChar == '*' || currentChar == '/' || currentChar == '=')
            {
                tokens.emplace_back(TokenType::OPERATOR,
                                    string(1, currentChar));
                position++;
            }
            // identifica separadores
            else if (currentChar == '(' || currentChar == ')' || currentChar == '{' || currentChar == '}' || currentChar == ';')
            {
                tokens.emplace_back(TokenType::PUNCTUATOR,
                                    string(1, currentChar));
                position++;
            }
            // Handle unknown characters
            else
            {
                tokens.emplace_back(TokenType::UNKNOWN,
                                    string(1, currentChar));
                position++;
            }
        }

        return tokens;
    }
};

// Converter TokenType para string para printar
string getTokenTypeName(TokenType type)
{
    switch (type) {
    case TokenType::KEYWORD:
        return "KEYWORD";
    case TokenType::IDENTIFIER:
        return "IDENTIFIER";
    case TokenType::INTEGER:
        return "INTEGER";
    case TokenType::FLOAT:
        return "FLOAT";
    case TokenType::OPERATOR:
        return "OPERATOR";
    case TokenType::PUNCTUATOR:
        return "PUNCTUATOR";
    case TokenType::UNKNOWN:
        return "UNKNOWN";
    default:
        return "UNDEFINED";
    }
}

// Função impressora
void printTokens(const vector<Token>& tokens)
{
    for (const auto& token : tokens) {
        cout << "Type: " << getTokenTypeName(token.type)
             << ", Value: " << token.value << endl;
    }
}

int main()
{
    string sourceCode
        = "int main() { float x = 3.14; float y=3.15; "
          "float z=x+y; return 0; }";

    // Cria o análisador léxico instanciando o construtor dele com o código fonte
    LexicalAnalyzer lexer(sourceCode);

    // Utiliza a função tokenize do analisador léxico instanciado e guarda em tokens
    vector<Token> tokens = lexer.tokenize();

    // Imprime código original
    cout << "Source code: " << sourceCode << endl << endl;

    // Imprime tokens
    cout << "Tokens Generate by Lexical Analyzer:" << endl;
    printTokens(tokens);

    return 0;
}