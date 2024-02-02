#include <iostream>
#include <math.h>
using namespace std;
int countDigits(int number)
{
    int count = 0;
    while (number > 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

bool isArmstrongnumber(int number)
{
    int original = number;
    int digits = countDigits(number);
    int sum = 0;

    while (number > 0)
    {
        /* code */
        int digit = number % 10;
        sum += pow(digit, digits);
        number /= 10;
    }
    

    return sum == original;
}

int main()
{
    int number;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (isArmstrongnumber(i))
        {
            cout << i << "\n";
        }
    }
    // cout << isArmstrongnumber(number);
    return 0;
}