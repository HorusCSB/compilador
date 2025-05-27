/*

parte-1

1 - estrutura de decisão
2 - estrutura de repetição
3 - reconhecer/manipular funções (métodos)
4 - reconhecer/manipular vetores (array)
5 - reconhecer/manipular palavras, simbolos e funções reservados (printf)
6 - reconhecer/manipular tipos de variáveis (int float string)

*/
/*

parte-2

1 - rececba como entrada a sequencia de tokens da analise lexica
2 - gerar uma árvore sintática que será lida por ASD
3 - 

*/

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
    AND,
    OR,
    MINUS,
    PLUS,
    MULTIPLY,
    EQUAL,
    DIFF,
    MINOR,
    BIGGER,
    DIVISION,
    BIGGER_EQUAL,
    MINOR_EQUAL,
    CLASS,
    IF,
    ELSE,
    WHILE,
    END_LINE,
    STRING_LITERAL, // aspas duplas
    STRING,
    OPEN_PARENTHESIS,  // ()
    CLOSE_PARENTHESIS, // ()
    OPEN_BRACKET,      // []
    CLOSE_BRACKET,     // []
    OPEN_BRACES,       // {}
    CLOSE_BRACRES,     // {}
    FUNCTION,
    RETURN,
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
            {"int", TokenType::INTEGER},
            {"float", TokenType::FLOAT},
            {"if", TokenType::IF},
            {"else", TokenType::ELSE},
            {"while", TokenType::WHILE},
            {"return", TokenType::RETURN},
            {"class", TokenType::CLASS},
            {"string", TokenType::STRING},
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
    string getWord()
    {
        size_t start = position;
        while (position < input.length() && isAlphaNumeric(input[position]))
        {
            position++;
        }
        return input.substr(start, position - start);
    }

    string getWordInStringFormat()
    {
        size_t start = position;
        while (position < input.length() && input[position] != '"')
        {
            position++;
        }
        return input.substr(start, position - start);
    }

    //  OBS: o hasDecimal evita mal formação de float como 1.0.0
    string getNumber()
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

            switch (currentChar)
            {
            // operadores
            case '+':
                tokens.emplace_back(TokenType::PLUS, string(1, currentChar));
                position++;
                break;
            case '-':
                tokens.emplace_back(TokenType::MINUS, string(1, currentChar));
                position++;
                break;
            case '*':
                tokens.emplace_back(TokenType::MULTIPLY, string(1, currentChar));
                position++;
                break;
            case '/':
                tokens.emplace_back(TokenType::DIVISION, string(1, currentChar));
                position++;
                break;
            case '=':
                tokens.emplace_back(TokenType::EQUAL, string(1, currentChar));
                position++;
                break;

            // separadores
            case '(':
            tokens.emplace_back(TokenType::OPEN_BRACES, string(1, currentChar));
                position++;
                break;
            case ')':
            tokens.emplace_back(TokenType::CLOSE_BRACRES, string(1, currentChar));
                position++;
                break;
            case '{':
            tokens.emplace_back(TokenType::OPEN_BRACKET, string(1, currentChar));
                position++;
                break;
            case '}':
            tokens.emplace_back(TokenType::CLOSE_BRACKET, string(1, currentChar));
                position++;
                break;
            case ';':
                tokens.emplace_back(TokenType::END_LINE, string(1, currentChar));
                position++;
                break;

            // strings
            case '"':
                tokens.emplace_back(TokenType::STRING_LITERAL, string(1, currentChar));
                position++;

                {
                    string newString = getWordInStringFormat();
                    tokens.emplace_back(TokenType::STRING, newString);
                }

                tokens.emplace_back(TokenType::STRING_LITERAL, string(1, currentChar));
                position++;
                break;

            // por padrão, verifica se é letra, número ou desconhecido
            default:
                if (isAlphabetical(currentChar))
                {
                    string word = getWord();
                    if (keywords.find(word) != keywords.end())
                    {
                        tokens.emplace_back(TokenType::KEYWORD, word);
                    }
                    else
                    {
                        tokens.emplace_back(TokenType::IDENTIFIER, word);
                    }
                }
                else if (isDigit(currentChar))
                {
                    string number = getNumber();
                    if (number.find('.') != string::npos)
                    {
                        tokens.emplace_back(TokenType::FLOAT, number);
                    }
                    else
                    {
                        tokens.emplace_back(TokenType::INTEGER, number);
                    }
                }
                else
                {
                    tokens.emplace_back(TokenType::UNKNOWN, string(1, currentChar));
                    position++;
                }
                break;
            }
        }

        return tokens;
    }
};

// Converter TokenType para string para printar
string getTokenTypeName(TokenType type)
{
    switch (type)
    {
    case TokenType::KEYWORD:
        return "KEYWORD";
    case TokenType::IDENTIFIER:
        return "IDENTIFIER";
    case TokenType::INTEGER:
        return "INTEGER";
    case TokenType::FLOAT:
        return "FLOAT";
    case TokenType::AND:
        return "AND";
    case TokenType::OR:
        return "OR";
    case TokenType::MINUS:
        return "MINUS";
    case TokenType::PLUS:
        return "PLUS";
    case TokenType::EQUAL:
        return "EQUAL";
    case TokenType::DIFF:
        return "DIFF";
    case TokenType::MINOR:
        return "MINOR";
    case TokenType::BIGGER:
        return "BIGGER";
    case TokenType::DIVISION:
        return "DIVISION";
    case TokenType::BIGGER_EQUAL:
        return "BIGGER_EQUAL";
    case TokenType::MINOR_EQUAL:
        return "MINOR_EQUAL";
    case TokenType::CLASS:
        return "CLASS";
    case TokenType::IF:
        return "IF";
    case TokenType::ELSE:
        return "ELSE";
    case TokenType::WHILE:
        return "WHILE";
    case TokenType::END_LINE:
        return "END_LINE";
    case TokenType::STRING_LITERAL:
        return "STRING_LITERAL";
    case TokenType::STRING:
        return "STRING";
    case TokenType::OPEN_PARENTHESIS:
        return "OPEN_PARENTHESIS";
    case TokenType::CLOSE_PARENTHESIS:
        return "CLOSE_PARENTHESIS";
    case TokenType::OPEN_BRACKET:
        return "OPEN_BRACKET";
    case TokenType::CLOSE_BRACKET:
        return "CLOSE_BRACKET";
    case TokenType::OPEN_BRACES:
        return "OPEN_BRACES";
    case TokenType::CLOSE_BRACRES:
        return "CLOSE_BRACRES";
    case TokenType::FUNCTION:
        return "FUNCTION";
    case TokenType::RETURN:
        return "RETURN";
    case TokenType::UNKNOWN:
        return "UNKNOWN";
    default:
        return "UNDEFINED";
    }
}

// Função impressora
void printTokens(const vector<Token> &tokens)
{
    for (const auto &token : tokens)
    {
        cout << "Type: " << getTokenTypeName(token.type)
             << ", Value: " << token.value << endl;
    }
}

int main()
{
    string src = "int main() { float x = 3.14; float y=3.15; "
                 "float z=x+y; string=\"abcdefg\"; return 0; }";

    // Cria o análisador léxico instanciando o construtor dele com o código fonte
    LexicalAnalyzer lexer(src);

    // Utiliza a função tokenize do analisador léxico instanciado e guarda em tokens
    vector<Token> tokens = lexer.tokenize();

    // Imprime código original
    cout << "Source code: " << src << endl
         << endl;

    // Imprime tokens
    cout << "Tokens Generate by Lexical Analyzer:" << endl;
    printTokens(tokens);

    return 0;
}