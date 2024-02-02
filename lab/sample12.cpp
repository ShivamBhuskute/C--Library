#include <iostream>
using namespace std;

#define rad 5.5
#define PI 3.14
int main()
{
    float peri = 2 * PI * rad;
    cout << "The perimeter of the circle is " << peri << "\n";
    float area = PI * rad * rad;
    cout << "The area of circle is " << area;
    return 0;
}