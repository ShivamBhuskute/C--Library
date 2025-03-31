// program has memory leaks and doesnt work properly
// because memory isn't deallocated
#include <iostream>

class Rectangle {
    private:
        int lenght;
        int heught;
}

void fun() {
    Rectangle* p = new Rectangle()
}

int main() {
    while(1) {
        fun();
    }
}