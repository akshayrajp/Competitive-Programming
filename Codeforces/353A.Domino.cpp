#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum_l = 0, sum_u = 0;
    cin >> n;
    pair<int, int> dom[n];
    for (i = 0; i < n; i++)
    {
        cin >> dom[i].first >> dom[i].second;
        sum_l += dom[i].first;
        sum_u += dom[i].second;
    }
    if (sum_l % 2 != 0 && sum_u % 2 != 0)
    {
        if (n == 1)
        {
            cout << -1;
            return 0;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (abs(dom[i].second - dom[i].first) == 1)
                {
                    cout << 1;
                    return 0;
                }
            }
            cout << -1;
            return 0;
        }
    }
    else if (sum_l % 2 == 0 && sum_u % 2 != 0 || sum_l % 2 != 0 && sum_u % 2 == 0)
    {
        cout << -1;
        return 0;
    }
    else
    {
        cout << 0;
        return 0;
    }
}