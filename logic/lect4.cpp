#include <iostream>
using namespace std;
/*Function are the block of code or instriuctions which is
designed to perform a specific tasks, function
provides code modularity*/
// int sum(int a, int b);
// int sum(int, int);
//void swap(int, int);
void swapPtr(int*, int*);

int main()
{
    int num1 = 5, num2 = 6;
    cout << "The number before swapping is " << num1 << " " << num2 << "\n";

    swapPtr(&num1, &num2);
    cout << "The number after swapping is " << num1 << " " << num2 << "\n";
    return 0;
}

// int sum(int a, int b)
// {
//     return a + b;
// }

// void swap(int a, int b)
// {
//     int c = a;
//     a = b;
//     b = c;
// }

void swapPtr(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}