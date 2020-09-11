#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int m, n, k, i, j, kx, temp;
    char ch;
    cin >> m;
    while (m--)
    {
        cin >> n >> k;
        bool fake[n];
        for (j = 0; j < n; j++)
            fake[i] = false;
        for (i = 0; i < k; i++)
        {
            cin >> kx;
            vector<int> coins;
            coins.clear();
            for (j = 0; j < 2 * kx; j++)
            {
                cin >> temp;
                coins.push_back(temp);
            }
            cin.ignore(32767, '\n');
            cin >> ch;
            if (ch == '=')
            {
                for (j = 0; j < 2 * kx; j++)
                    fake[coins[j] - 1] = true;
            }
            else if (ch == '<' || ch == '<')
            {
                for (j = 0; j < n; j++)
                {
                    if (find(coins.begin(), coins.end(), j + 1) != coins.end())
                        continue;
                    else
                        fake[j] = true;
                }
            }
        }
        if (count(fake, fake + n, false) > 1)
            cout << 0 << '\n';
        else
        {
            for (j = 0; j < n; j++)
                if (!fake[i])
                    break;
            cout << i << '\n';
        }
    }
    return 0;
}