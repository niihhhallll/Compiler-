#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <optional>
#include <filesystem>
#include "../include/reader.hpp"

    std::optional<std::vector<std::string>> Reader::Read(const std::filesystem::path& FilePath)
    {

        // constructor for opening file.
        std::ifstream File(FilePath);
        /*
         * Checks if the file is opened or not
         * else it Prints a error message and throws a nullopt;
         */
        if(!File.is_open())
        {
            std::cerr << "Cannot Open " << FilePath << std::endl;
            return std::nullopt;
        }

        std::vector<std::string> VecLine{};
        std::string Line;
        while(std::getline(File,Line))
        {
            // push back to the vector.
            VecLine.push_back(std::move(Line));
        }
        return VecLine;
        }
