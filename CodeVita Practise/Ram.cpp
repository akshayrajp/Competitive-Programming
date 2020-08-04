#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n], temp;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        temp = a[i];
        int a, b, c, ma, mi;
        a = temp / 100;
        temp %= 100;
        b = temp / 10;
        temp %= 10;
        ma = max(temp, a, b);
        mi = min(temp, a, b);
        temp = ma * 11 + mi * 7;
        if (temp / 100 != 0)
            temp %= 100;
        a[i] = temp / 10;
    }
    for (i = 0; i < n; i++)
        cout << a[i] << "  ";
    return 0;
}