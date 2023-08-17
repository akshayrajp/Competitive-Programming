#include <iostream>
using namespace std;
int main()
{
    int t, n;
    long long int k, d, i, total = 0;

    cin >> t;

    while (t--)
    {
        cin >> n >> k >> d;
        total = 0;

        long long int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        long long int max_contests = total / k;

        max_contests > d ? cout << d : cout << max_contests;

        cout << '\n';
    }
}