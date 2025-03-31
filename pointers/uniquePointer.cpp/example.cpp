#include <iostream>
using namespace std;

// program demostrates how using an simple pointer
// can lead to memory leaks as if program halts in some case
// the memory allocated wont be deallocated

class Resource{
    public: 
    Resource() {
        cout << "Reource created";
    }

    ~Resource() {
        cout << "Resource destroyed";
    }
};

int main() {
    auto* ptr { new Resource() };

    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if (x == 0) {
        throw 0;
    }

    delete ptr;
}