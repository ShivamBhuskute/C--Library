#include <iostream>
using namespace std;

bool isPalindrome(int number)
{
    int Originalnum = number;
    int reversedNumber = 0;

    while (number > 0)
    {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return Originalnum == reversedNumber;
}

int main()
{
    int num;
    cin >> num;
    if (isPalindrome(num))
    {
        cout << num << " is a palinmdrome number";
    }
    else
    {
        cout << "The given number is not a palindrome";
    }

    return 0;
}