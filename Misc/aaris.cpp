#include <iostream>
using namespace std;
int main()
{
    int n, c = 0, t, i;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n;
        for (i = 1; i <= 100; i++)
        {
            if (n % i <= (n / 2))
                c++;
        }
        cout << c << '\n';
    }
}