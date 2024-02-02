#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    
    cout << (a + a++ + a) << "\n";
    
    cout << (a++ + a + a++ + a) << "\n";

    cout << (a++ + b++ + a + b++) << "\n";

    cout << (a++ + ++a) << "\n";
    
    cout << (++a + b++ + a++ + ++a + a + ++b) << "\n";
    return 0;
}