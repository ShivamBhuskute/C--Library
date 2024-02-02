#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l = 0) : length(l) {}
    friend int printlength(const Box&);  // Correct friend declaration syntax
};

int printlength(const Box& b) {  // Pass by reference to avoid copy
    return b.length;
}

int main() {
    Box b(5);
    cout << "Length of box : " << printlength(b) << "\n";  // Add newline for formatting
    return 0;
}
