#include <iostream>
using namespace std;
class Phone
{
public:
    string colour;
    int modelno;
    string OS;
};
int main()
{
    Phone obj1;
    obj1.colour = "Blue";
    obj1.modelno = 1;
    obj1.OS = "Android 11";

    cout << obj1.colour << "," << obj1.modelno << "," << obj1.OS;
    return 0;
}