#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <optional>
#include <memory>
#include "../include/reader.hpp"

namespace Reader
{
    std::optional<std::shared_ptr<std::vector<std::string>>> Read(const std::string& FilePath)
    {
        // exception handling
        try{
        // constructor for opening file.
        std::fstream File(FilePath);
        /*
         * Checks if the file is opened or not
         * else it Prints a error message and throws a nullopt;
         */
        if(!File.is_open())
        {
            std::cerr << "Cannot Open " << FilePath << std::endl;
            throw std::runtime_error("Cannot Open The FilePath.");
        }

        // makes a heap allocated smart pointer for VecLine.
        std::shared_ptr<std::vector<std::string>> VecLine = std::make_shared<std::vector<std::string>>();
        /*
         * Temp Line object
         * it reads line by line.
         * and then feeds to VecLine
         * so it can return to the function called.
         */
        std::string Line;
        int inc = 0;
        while(std::getline(File,Line))
        {
            // push back to the vector.
            VecLine->push_back(Line);
        }
        return VecLine;
        }

        // exception handling (catch).
        catch(std::exception& e)
        {
            std::cerr << e.what() << std::endl;
            return std::nullopt;
        }
    }
}
