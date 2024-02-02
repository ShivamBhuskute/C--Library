#include <iostream>

using namespace std;

int main() {
  int num = 5;

  cout << "The initial value of num is: " << num << endl;

  // Post-decrement
  cout << "After post-decrement, the value of num is: " << num-- << endl;

  // Pre-decrement
  cout << "After pre-decrement, the value of num is: " << --num << endl;

  // Post-increment
  cout << "After post-increment, the value of num is: " << num++ << endl;

  // Pre-increment
  cout << "After pre-increment, the value of num is: " << ++num << endl;

  return 0;
}
