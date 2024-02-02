#include <iostream>
using namespace std;

int main()
{
    float time = (45.5) / 60;
    cout << "The time in hours is " << time << "\n";
    float mile = 14 / 1.6;
    cout << "The speed in miles is " << mile << "\n";
    cout << "Average speed of runner in miles is " << mile / time;

    return 0;
}