#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Number is even."
    }
    if (num % 2 != 0)
    {
        cout << "Number is odd."
    }
    return 0;
}