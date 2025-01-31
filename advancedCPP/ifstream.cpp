#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream inputFile("../.clang-format");  // open

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string line;
    while (getline(inputFile, line)) {  // read
        std::cout << line << std::endl;
    }

    inputFile.close();
    return 0;
}
