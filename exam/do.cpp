#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the value of multiplication table: ";
    cin >> a;
    int i = 1;
    do
    {
        cout << a << " * " << i << " = " << a * i << "\n";
        i++;
    } while (i <= 10);
   
   return 0;

    return 0;
}