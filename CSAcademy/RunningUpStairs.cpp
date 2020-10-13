#include <iostream>
using namespace std;
int countWays(int n)
{
    int res[n + 1];
    res[0] = 1;
    res[1] = 1;
    res[2] = 2;
    for (int i = 3; i <= n; i++)
        res[i] = res[i - 1] + res[i - 2];

    return res[n];
}
int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << countWays(n) << '\n';
    }
    return 0;
}
