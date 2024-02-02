#include <iostream>
using namespace std;

class Myclass{
    public:
    int x;
    int y;
};

int main(){
    Myclass myobj;
    Myclass* my_pointer = &myobj;

    myobj.x = 10;

    my_pointer->x = 30;

    cout << myobj.x << "\n" << my_pointer->x;
return 0;
}