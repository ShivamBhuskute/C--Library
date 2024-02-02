#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count = 0;

    

    while (num != 0)
    {
        // int rem = num % 10;
        num /= 10;
        count++;
    }

    cout << count;
    return 0;
}