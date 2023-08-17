#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, n, a = 0, b = 0, i;
    bool ans = false;
    string ip;
    cin >> t;
    while (t--)
    {
        a = 0, b = 0, ans = false;
        cin >> n;
        cin >> ip;
        for (i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0 && ip[i] == 1)
                a++;
            else if (i % 2 == 1 && ip[i] == 1)
                b++;

            if (a == n - 1 && b < n - 2 || b == n - 1 && a < n - 2)
            {
                cout << i + 1;
                ans = true;
                break;
            }
        }
        if (ans == false)
            cout << n * 2;
    }
    return 0;
}
