#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;

int f(int l, int r, string s, string t)
{
    l = 0, r = 0;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans++;
        if (s[l] == t[r])
        {
            l++;
            r++;
            if (r == t.size())
            {
                break;
            }
        }
        else
        {
            l++;
        }
    }
    if (r == t.size())
    {
        return ans - r;
    }
    return -1;
}

int main()
{
    int l, r = 0;
    string s = "aaaaasadjdk";
    string t = "sad";
    cout << f(l, r, s, t);
    return 0;
}