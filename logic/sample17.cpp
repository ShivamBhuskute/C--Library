// Write ap rogram to check if the number is multplied by 5 then the program display "Hi!five
// If the number is divisible by 2 it display HIEVEN"
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 5 == 0)
    {
        cout << "HIFIVE"
             << "\n";
    }
    if (num % 2 == 0)
    {
        cout << "HIEVEN";
    }
    return 0;
}