#include <iostream>
using namespace std;
int main()
{
    int n, k, i;
    cin >> n >> k;
    for (i = 1; i <= n - k * k + 1 && i <= n; i++)
        cout << i << ' ';
    for (i = n; i > n - k * k + 1 && i > 0; i--)
        cout << i << ' ';
    return 0;
}