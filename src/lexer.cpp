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

    // if return 0;
    // refactor it later.
    Token Check(const std::string& Buffer)
    {
        if(Buffer == "return")
        {
            return Token{KeyWord,"return",1};
        }
        else {
            return Token{KeyWord,"Unknow",0};
        }
    }
    std::string buffer;
    std::vector<Token> data{};
    std::optional<std::vector<Token>> Lexer(std::string& Line)
    {
        for(char a : Line)
        {
            if(std::isalpha(static_cast<unsigned char>(a)))
            {
                buffer.push_back(a);
            }

            else if (std::isspace(static_cast<unsigned char>(a)))
            {
                data.push_back(Check(buffer));
                continue;
            }
        }
    }
}
