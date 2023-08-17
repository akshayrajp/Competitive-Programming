#include <iostream>
using namespace std;
int main()
{
    long int y, k, n, i, t;
    cin >> y >> k >> n;
    t = ((y / k) + 1) * k;
    if (t > n || y >= n)
    {
        cout << -1;
        return 0;
    }
    for (i = t; i <= n; i += k)
    {
        cout << i - y << " ";
    }
    return 0;
}