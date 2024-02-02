#include<iostream>
using namespace std;

class Myclass{
    public:
    int mynum;
        Myclass(){
            cout << "Hello world!";
        }
        Myclass(int num){
            mynum = num;
        }
};

int main(){
    Myclass myobj(15);
    cout << myobj.mynum;
    
    return 0;
}