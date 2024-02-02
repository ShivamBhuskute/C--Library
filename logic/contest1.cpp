#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int number[n];
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (number[i] % 3 == 0 && number[i] % 12 == 0)
        {
            count++;
        }
    }
    cout << count;
}