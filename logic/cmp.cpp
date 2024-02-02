#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "Shivam";
    char b[] = "Shivam";
    int C = strcmp(a, b);
    if (C == 0)
    {
        cout << "Good";
    }
    return 0;
}