#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <optional>
#include <memory>

namespace Reader
{
     std::optional<std::shared_ptr<std::vector<std::string>>> Read(const std::string& FilePath);
}
