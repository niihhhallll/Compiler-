#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <optional>
#include <memory>
#include "../include/reader.hpp"

    std::optional<std::vector<std::string>> Reader::Read(const std::string& FilePath)
    {
        // exception handling

        // constructor for opening file.
        std::fstream File(FilePath);
        /*
         * Checks if the file is opened or not
         * else it Prints a error message and throws a nullopt;
         */
        if(!File.is_open())
        {
            std::cerr << "Cannot Open " << FilePath << std::endl;
            return std::nullopt;
        }

        // makes a heap allocated smart pointer for VecLine.
        // this is only for the readability, i will make this into a `auto VecLine`.
        std::vector<std::string> VecLine{};
        /*
         * Temp Line object
         * it reads line by line.
         * and then feeds to VecLine
         * so it can return to the function called.
         */
        std::string Line;
        while(std::getline(File,Line))
        {
            // push back to the vector.
            VecLine->push_back(Line);
        }
        return VecLine;
        }
