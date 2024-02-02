#include <iostream>
using namespace std;

int main()
{
     int marks[] = {10, 20, 30, 40, 50};
     int mathmarks[4];
     mathmarks[0] = 23;
     mathmarks[1] = 58;
     mathmarks[2] = 74;
     mathmarks[3] = 59;

     cout << "These are math marks: "
          << "\n";
     cout << mathmarks[0] << "\n";
     cout << mathmarks[1] << "\n";
     cout << mathmarks[2] << "\n";
     cout << mathmarks[3] << "\n";

     cout << "These marks are: "
          << "\n";
     marks[1] = 90;
     cout << marks[0] << "\n";
     cout << marks[1] << "\n";
     cout << marks[2] << "\n";
     cout << marks[3] << "\n";
     cout << marks[2] << "\n";
     return 0;
}