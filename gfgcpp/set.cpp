#include <iostream>
#include<unordered_set>
using namespace std;
int doUnion(int a[], int n, int b[], int m)
{
    unordered_set<int> unionSet;

    for (int i = 0; i < n; i++)
    {
        unionSet.insert(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        unionSet.insert(b[i]);
    }
    return unionSet.size();
}
int main()
{
    int a[] = {1, 2, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    int b[] = {3, 4, 5, 6};
    int m = sizeof(b) / sizeof(b[0]);

    int result = doUnion(a, n, b, m);
    cout << "Number of elements in the union: " << result << endl;

    return 0;
    return 0;
}