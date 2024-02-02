#include <iostream>
using namespace std;
inline int A(int a)
{
    return a * a * a;
}
int main()
{
    cout << "The area is: " << A(3);
    return 0;
}