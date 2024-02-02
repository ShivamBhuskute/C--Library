#include <iostream>
using namespace std;

class solution
{
private:
    int minOperation(int n)
    {
        int count = 0;
        while (n != 0)
        {
            /* code */
            if (n % 2 == 0 || n == 1)
            {
                count += 1;
                n = n / 2;
            }
            else if (n % 2 != 0 && n != 1)
            {
                count += 2;
                n = n / 2;
            }
        }
        return count;
    }

public:
    friend int main();
};

int main()
{
    int n;
    cin >> n;
    solution obj;
    int ans = obj.minOperation(n);
    cout << ans;
    return 0;
}