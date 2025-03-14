#include <iostream>

void createLeak() {
    int* arr = new int[10];  // intentionally forget to deallocate memory for
                             // demonstration
}

int main() {
    createLeak();
    std::cout << "Program finished" << std::endl;
    return 0;
}

// use valgrid to detect leak