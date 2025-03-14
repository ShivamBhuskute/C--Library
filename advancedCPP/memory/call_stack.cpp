#include <iostream>

int foo(int x) {
    // b
    return x;
} // function is popped off the call stack here

int main() {
    // a
    foo(5); // function is pushed to call stack here
    // c
    return 0;
}

// stack looks like this
// a - main()
// b - foo() along with the variables -> main()
// c - main()