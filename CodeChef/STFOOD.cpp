#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t, i, n, ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int s, v, p, profit;
        for (i = 0; i < n; i++)
        {
            cin >> s >> p >> v;
            profit = (p / (s + 1)) * v;
            ans = max(ans, profit);
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}