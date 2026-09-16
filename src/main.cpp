#include <iostream>
#include "../include/reader.hpp"
int main()
{
    auto result = Reader::Read("hello.txt");
    if(result)
    {
        for(auto a : **result)
    {
        std::cout << a << std::endl;
    }
    }
    return 0;
}
