#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ip;
    int i;
    cin >> ip;
    for (i = 0; i < ip.length(); i++)
    {
        if (ip[i] == '.')
            cout << 0;
        else if (ip[i] == '-' && ip[i + 1] == '.')
        {
            cout << 1;
            ++i;
        }
        else if (ip[i] == '-' && ip[i + 1] == '-')
        {
            cout << 2;
            ++i;
        }
    }
    return 0;
}
