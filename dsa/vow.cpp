#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// int f(char arr[], int n)
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 'a' || arr[i] == 'e' ||  arr[i] == 'i' ||  arr[i] == 'o' ||  arr[i] == 'u')
//         {
//             cnt += 1;
//         }
//     }
//     return cnt;
// }

// int main()
// {
//     int n = 5;
//     char arr[n] = {'a', 'e', 'i', 'o', 'k'};

//     cout<<f(arr, n);

//     return 0;
// }

int main()
{
    int size = 5;
    char arr[size] = {'a', 'e', 'i', 'o', 'a'};

    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' ||  arr[i] == 'i' ||  arr[i] == 'o' ||  arr[i] == 'u')
        {
            cnt = cnt + 1;
        }
    }
    cout << cnt;


}