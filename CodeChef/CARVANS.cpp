#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    int t, n, c = 1, a, b;
    cin >> t;
    while (t--)
    {
        c = 1;
        cin >> n;

        cin >> a;
        while (--n)
        {
            cin >> b;
            if (b <= a)
                c++;
            a = b;
        }
        cout << c << '\n';
    }
    return 0;
}