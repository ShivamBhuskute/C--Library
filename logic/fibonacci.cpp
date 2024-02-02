#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int num;
    cin >> num;
    //used for printing the nth number
    /*cout << "The " << num << " number in fibonacci series is " << fib(num) << "\n"; */
    

    //this is used to print the entire series
    for (int i = 0; i < num; i++)
    {
        cout << fib(i) << "\n";
    }
    return 0;
}