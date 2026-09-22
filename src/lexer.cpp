#include <optional>
#include <vector>
#include <string>

enum TokenType
{
    KeyWord, // keywords eg: return,int,bool,string
    Identifier, // identifier eg: variable names
    Literal, // return's value eg: 10,"Hello, world"
    Semi // semi colon, eg : ;.
};

struct Token
{
    TokenType Type;
    std::string Value;
    size_t line;
};

namespace Lexer
{
}
