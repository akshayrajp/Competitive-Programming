#include <iostream>
typedef long long int ulli;
using namespace std;
int main()
{
    ulli t, n, m, k, i, j, c, z, o, total = 0;
    bool flag = false;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        ulli arr[n][m];
        c = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> arr[i][j];
        // preprocess the input matrix such that `sum[i][j]` stores
        // sum of elements in the matrix from `(0, 0)` to `(i, j)`
        ulli sum[n][m];
        // ulli p = 0, q = 0, r = n - 1, s = m - 1;
        sum[0][0] = arr[0][0];

        // preprocess the first column
        for (j = 1; j < m; j++)
        {
            sum[0][j] = arr[0][j] + sum[0][j - 1];
        }

        // preprocess the first row
        for (i = 1; i < n; i++)
        {
            sum[i][0] = arr[i][0] + sum[i - 1][0];
        }

        // preprocess the rest of the matrix
        for (i = 1; i < n; i++)
        {
            for (j = 1; j < m; j++)
            {
                sum[i][j] = arr[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
            }
        }

        if (n <= m)
            o = n;
        else
            o = m;

        flag = false;
        for (i = 0; i < n; i++)
        {
            z = 1;
            flag = false;
            for (j = 0; j < m; j++)
            {
            HERE:
                if (i >= (z - 1) && j >= (z - 1))
                {
                    total = sum[i][j];

                    if (j - z >= 0)
                        total -= sum[i][j - z];

                    if (i - z >= 0)
                        total -= sum[i - z][j];

                    if (i - z >= 0 && j - z >= 0)
                        total += sum[i - z][j - z];

                    if (total / (z * z) >= k)
                    {
                        c += (m - j);
                        // cout << "i = " << i << " j = " << j << " z = " << z << " count = " << c << " total = " << total << '\n';
                        if (z <= o)
                        {
                            z++;
                            goto HERE;
                        }
                        else
                            flag = true;
                    }
                }
                if (flag)
                    break;
            }
        }
        cout << c << '\n';
    }
}
