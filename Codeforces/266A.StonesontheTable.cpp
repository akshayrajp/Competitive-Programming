#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ip;
    int n, i, c = 0;
    cin >> n;
    cin.ignore(32767, '\n');
    cin >> ip;
    for (i = 0; i < n - 1; i++)
    {
        if (ip[i] == ip[i + 1])
            c++;
    }
    cout << c;
    return 0;
}
