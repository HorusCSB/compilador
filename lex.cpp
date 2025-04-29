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
    END,
    UNKNOWN
};

struct Token
{
    TokenType type;
    string value;
    Token(TokenType type, const string &v) : type(type), value(v) {}
};