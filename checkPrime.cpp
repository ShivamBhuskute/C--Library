#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    int i = 5;
    while (i <= sqrt(n))
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
        i += 6;
    }
    return true;
}

int main()
{
    int N;
    cout << "Enter a number N: ";
    cin >> N;

    // isPrime(N) ? cout << "It is prime" :  cout << "It's not prime";

    if  (isPrime(N))
    {
        cout << N << " is a prime number.\n";
    }
    else
    {
        cout << N << " is not a prime number.\n";
    }

    return 0;
}
