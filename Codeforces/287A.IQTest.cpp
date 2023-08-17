#include <bits/stdc++.h>
using namespace std;
int counter(char a, char b, char c, char d);
int main()
{
    char arr[4][4];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {

            cin >> arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (counter(arr[i][j], arr[i + 1][j], arr[i][j + 1], arr[i + 1][j + 1]) == 1)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
int counter(char a, char b, char c, char d)
{
    int p = 0, h = 0;
    if (a == '.')
        p++;
    else
        h++;
    if (b == '.')
        p++;
    else
        h++;
    if (c == '.')
        p++;
    else
        h++;
    if (d == '.')
        p++;
    else
        h++;
    if (p >= 3 || h >= 3)
        return 1;
    else
        return 0;
}
