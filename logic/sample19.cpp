#include <iostream>
using namespace std;

int main()
{
    int percentage;
    cin >> percentage;
    if (percentage >= 75)
    {
        cout << "Student is eligible for interview.";
    }
    if (percentage < 75)
    {
        cout << "Student is not eligible for interview."
    }
    return 0;
}