// wap to check if the person is eligible for driving licence
// Age = 18+ and rto test passed or more than 60 marks
#include <iostream>
using namespace std;

int main()
{
    int age, test;
    bool pass = 1;
    cout << "Enter the age: ";
    cin >> age;
    if (age >= 18)
    {
        if (test >= 60)
        {
            cout << "Enter the percentage: ";
            cin >> test;
            cout << "License will be given";
        }
        else if (test > 60)
        {
            cout << "License will not be given.";
        }
    }
    else
    {
        cout << "Age should be more than 18.";
    }
    return 0;
}