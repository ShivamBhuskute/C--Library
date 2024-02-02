#include <iostream>
using namespace std;
struct Employee
{
    int sum(int a, int b)
    {
        return a + b;
    }

    float salary(int inhand, int bonus)
    {
        return inhand + bonus;
    }

    bool age(int year)
    {
        if (year > 20)
        {
            return true;
        }
    }
};
int main()
{
    int a, b, age;
    float inhand, bonus;

    cin >> a >> b >> age >> inhand >> bonus;
    Employee month;
    cout << month.sum(a, b) << "\n";

    cout << month.salary(inhand, bonus) << "\n";

    cout << month.age(age);
    return 0;
}