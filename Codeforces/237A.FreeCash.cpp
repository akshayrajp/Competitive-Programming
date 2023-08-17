#include <iostream>
using namespace std;
int main()
{
    int n, i, x, y;
    int freq[24][60] = {0};
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        freq[x][y]++;
    }
    i = 0;
    for (x = 0; x < 24; x++)
        for (y = 0; y < 60; y++)
            if (freq[x][y] > i)
                i = freq[x][y];
    cout << i;
}