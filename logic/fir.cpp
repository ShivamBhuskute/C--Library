#include <iostream>
using namespace std;

int main(){
    int myNum[] = {1, 2, 3, 4, 5};
    for(int i : myNum){
        cout << i << "\n";
    }
    return 0;
}