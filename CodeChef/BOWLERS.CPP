#include <iostream>
using namespace std;
int main()
{
    long long int t, n, l, k, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> l;
        if (n >= k)
        {
            if ((double)l >= (double)n / k)
            {
                for (i = 1; i <= n; i++)
                {
                    if (i % k != 0)
                        cout << i % k << ' ';
                    else
                        cout << k << ' ';
                }
                cout << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else
        {
            for (i = 1; i <= n; i++)
                cout << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}