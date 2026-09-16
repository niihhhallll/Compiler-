#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <optional>
#include <filesystem>

namespace Reader
{
     std::optional<std::vector<std::string>> Read(const std::filesystem::path& FilePath);
}
