#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string input = "10 20 30";
    std::istringstream iss(input);

    int number;
    while (iss >> number) {
        std::cout << "Extracted number: " << number << std::endl;
    }

    return 0;
}
