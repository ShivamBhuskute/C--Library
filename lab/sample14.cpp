#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float side;
    cout << "Enter the size of the side of the hexagon: ";
    cin >> side;
    float area = 3 * ((sqrt(3)) / 2) * side * side;
    cout << "The area of the hexagon is " << area;
    return 0;
}