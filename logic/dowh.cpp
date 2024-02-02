#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int i = 1;
    do
    {
        cout << num << "x" << i << "=" << num * i << "\n";
        i++;
    } 
    while (i <= 10);
    {
    }
    return 0;
}