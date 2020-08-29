#include <iostream>
using namespace std;
int main()
{
    int n, m, i, t;
    cin >> n >> m;
    t = n + m;
    for (i = 0; i < t; i++)
    {
        if (n != 0)
        {
            if (m == 0)
            {
                cout << 'B';
                n--;
            }
            else if (m != 0 && i & 1 == 0)
            {
                cout << 'B';
                n--;
            }
        }
        if (m != 0)
        {
            if (n == 0)
            {
                cout << 'G';
                m--;
            }
            else if (n != 0 && i & 1 == 1)
            {
                cout << 'G';
                m--;
            }
        }
    }
    return 0;
}