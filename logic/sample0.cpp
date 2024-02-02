#include <iostream>
using namespace std;

// const float PI = 3.14;
#define PI 3.14

float circle(float radius)
{
    return (PI * radius * radius);
}

int main()
{
    float radius;
    cin >> radius;
    cout << "Area of circle: " << circle(radius) << "\n";
    return 0;
}

//int radius = 4; 
