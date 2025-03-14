#include <iostream>

long long factorial(long long n, long long accumulator = 1) {
    if (n == 0) {
        return accumulator;
    } else {
        return factorial(n - 1, n * accumulator);
    }
}

int main() {
    long long n = 5;
    std::cout << "Tail-recursive factorial of " << n << ": "
              << factorial(n) << std::endl;

    n = 10;
    std::cout << "Tail-recursive factorial of " << n << ": "
              << factorial(n) << std::endl;

    n = 0;
    std::cout << "Tail-recursive factorial of " << n << ": "
              << factorial(n) << std::endl;

    return 0;
}

// g++ -O3 your_file.cpp -o your_program