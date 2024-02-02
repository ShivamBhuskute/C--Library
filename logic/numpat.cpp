#include <iostream>
using namespace std;
int pat(int n)
{
    for (int row = n; row >= 1; row--)
    {
        for (int col = n; col >= 1; col--)
        {
            for (int i = 0; i < row; i++)
            {
                cout << col << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int num;
    cin >> num;
    cout << pat(num);
    return 0;
}