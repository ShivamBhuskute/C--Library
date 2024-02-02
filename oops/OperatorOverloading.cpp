// Unary Operator overloading
#include <bits/stdc++.h>
using namespace std;
class Demo
{
private:
    int a, b;

public:
    Demo(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "A = " << a << " " << "B = " << b << endl;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }
};
int main()
{
    Demo d(-10, 20);
    d.show();
    -d;
    d.show();
    return 0;
}