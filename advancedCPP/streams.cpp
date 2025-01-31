#include <iostream>
#include <sstream>
#include <string>

int main() {
    // Converting string to stream
    std::string data = "42 3.14 Hello";
    std::istringstream input(data);

    int integerValue;
    double doubleValue;
    std::string stringValue;

    // Reading from the string stream
    input >> integerValue >> doubleValue >> stringValue;

    std::cout << "Integer: " << integerValue << "\n";
    std::cout << "Double: " << doubleValue << "\n";
    std::cout << "String: " << stringValue << "\n";

    // Converting stream to string
    std::ostringstream output;
    output << "Values read: " << integerValue << ", " << doubleValue << ", "
           << stringValue;

    std::string result = output.str();  // Get the string from the stream
    std::cout << result << std::endl;

    return 0;
}
