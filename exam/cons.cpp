#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout << "Constructor created."
             << "\n";
    }
    ~Test()
    {
        cout << "Destructor created."
             << "\n";
    }
};
int main()
{
    Test t1, t2, t3, t4;
    return 0;
}