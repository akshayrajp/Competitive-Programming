#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, i, j;
    cin >> t;

    while (t--)
    {
        cin >> n;
        char bin[n], temp[4];

        for (i = 0; i < n; i++)
            cin >> bin[i];

        for (i = 0; i < n; i += 4)
        {
            for (j = 0; j < 4; j++)
                temp[j] = bin[i + j];

            cout << (char)(stoi(temp, 0, 2) + 97);
        }
        cout << endl;
    }
    return 0;
}