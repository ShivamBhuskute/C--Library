#include <iostream>
using namespace std;

int main()
{
    char input;
    cin >> input;
    cout << (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z' ? "input is alphabet \n" : "input is not an alphabet\n");
    return 0;
}