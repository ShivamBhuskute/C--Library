#include <iostream>
using namespace std;

int main()
{
   int num1, num2, num3;
   cout << "Enter the three numbers: "
        << "\n";
   cin >> num1 >> num2 >> num3;
   cout << "Average is " << (num1 + num2 + num3) / 3;
   return 0;
}