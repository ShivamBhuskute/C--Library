#include <iostream>
using namespace std;

int main()
{
    int matrix[2][2];
    int i, j, sum = 0;

    cout << "Enter the elements of matrix: "
         << "\n";

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "Enter the element at index (" << i << "," << j << "): ";
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements in the matrix is " << sum << ".";

    return 0;
}