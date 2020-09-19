#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, i, t;
    cin >> n >> m;
    t = n + m;
    if (n <= m)
        t = n;
    else if (n >= m)
        t = m;

    if (n == m)
        for (i = 0; i < t; i++)
            cout << "GB";

    if (n > m)
    {
        for (i = 0; i < t; i++)
            cout << "BG";

        for (i = 0; i < n - m; i++)
            cout << "B";
    }
    else if (n < m)
    {
        for (i = 0; i < t; i++)
            cout << "GB";

        for (i = 0; i < m - n; i++)
            cout << "G";
    }
    return 0;
}