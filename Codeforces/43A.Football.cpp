#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0, m = 0, i;
    cin >> n;
    string ip[n];
    string res;
    for (i = 0; i < n; i++)
    {
        cin >> ip[i];
    }
    sort(ip, ip + n);
    for (i = 0; i < n; i++)
    {
        if (ip[i] == ip[i + 1])
            c++;
        else
            c = 0;
        if (c >= m)
        {
            m = c, res = ip[i];
        }
    }
    cout << res;
    return 0;
}
