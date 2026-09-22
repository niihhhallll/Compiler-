#include "../include/reader.hpp"

// method is working properly.
std::optional<std::vector<std::string>>
Reader::Read(const std::filesystem::path &FilePath) {
  // object for opening file.
  std::ifstream File(FilePath);

  /*
   * Checks if the file is opened or not
   * else it Prints a error message and throws a nullopt;
   */

  if (!File.is_open()) {
    std::cerr << "Cannot Open " << FilePath << std::endl;
    return std::nullopt;
  }

  /*
   * breif: storing the result from the file
   * return: it is returned from this method.
   */
  std::vector<std::string> VecLine{};
  // used for getting the line from the file. and move to the vector.
  std::string Line;
  // loop for getting result line by line, and storing them in VecLine.
  while (std::getline(File, Line)) {
    // push back to the vector.
    VecLine.push_back(std::move(Line));
  }
  // returns VecLine, which has line by line of the given filepath.
  return VecLine;
}
