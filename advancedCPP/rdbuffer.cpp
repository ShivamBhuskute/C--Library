#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct Token {
    std::string value;
};

std::vector<Token> tokenize(const std::string &input) {
    std::vector<Token> tokens;
    std::istringstream stream(input);
    std::string token;

    while (stream >> token) {
        tokens.push_back(Token{token});
    }

    return tokens;
}

int main() {
    std::ifstream file("input.txt");

    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    file.close();

    std::vector<Token> tokens = tokenize(buffer.str());

    for (const auto &token : tokens) {
        std::cout << "Token: " << token.value << std::endl;
    }

    return 0;
}
