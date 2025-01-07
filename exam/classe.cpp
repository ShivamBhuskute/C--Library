#include <iostream>
using namespace std;
class me
{
public:
    int age;
    string name;
};
int main()
{
    me shivam;
    cin >> shivam.age >> shivam.name;
    cout << shivam.age << "\n"
         << shivam.name;
    return 0;
}