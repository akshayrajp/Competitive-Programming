#include <iostream>
using namespace std;
int main()
{
    int t, n, k, i, c;
    cin >> t;
    while (t--)
    {
        k = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> c;
            k += c;
        }
        if (k & 1 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}