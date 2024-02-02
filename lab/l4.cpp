#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "The prime numbers from 1 to 100 are: "
         << "\n";

    for (int i = 1; i <= 100; i++)
    {
        if (is_prime(i))
        {
            cout << i << "\n";
        }
    }
    return 0;
}