#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip;
    int q, l, r, i, c = 0;
    cin >> ip;
    cin >> q;
    while (q--)
    {
        c = 0;
        cin >> l >> r;
        for (i = l - 1; i < r - 2; i++)
            if (ip[i] == ip[i + 1])
                c++;
        cout << c + 1 << '\n';
    }
    return 0;
}