#include <iostream>
using namespace std;
class MyClass
{
public:
    int myNum;
    string String;
} int main()
{
    MyClass myObj;
    myObj.myNum = 10;
    myObj.String = "Hello world!";
    cout << myObj.myNum << "\n";
    cout << myObj.String;
    return 0;
}