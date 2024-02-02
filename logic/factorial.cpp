#include <iostream>
using namespace std;
int fact(int k)
{
    if (k <= 1)
    {
        return 1;
    }
    return k * fact(k - 1);
}
int main()
{
    int num;
    cin >> num;
    cout << "The factorial is " << fact(num) << "\n";
    return 0;
}