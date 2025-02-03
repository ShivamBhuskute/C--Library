#include <iostream>

[[nodiscard]] int add(int a, int b) { return a + b; }

int multiply(int a, int b) { return a * b; }

int main() {
    int x = 5;
    int y = 3;

    int sum = add(x, y);
    std::cout << "Sum: " << sum << std::endl;

    add(x, y);

    multiply(x, y);

    (void)add(x, y);

    return 0;
}