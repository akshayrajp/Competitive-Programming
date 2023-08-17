#include <iostream>
typedef unsigned long long int ulli;
using namespace std;
// Calculate the sum of all elements in a submatrix in constant time
ulli findSubmatrixSum(ulli **mat, ulli n, ulli m, ulli p, ulli q, ulli r, ulli s)
{
    // preprocess the input matrix such that `sum[i][j]` stores
    // sum of elements in the matrix from `(0, 0)` to `(i, j)`
    ulli sum[n][m];
    // ulli p = 0, q = 0, r = n - 1, s = m - 1;
    sum[0][0] = mat[0][0];

    // preprocess the first column
    for (ulli j = 1; j < m; j++)
    {
        sum[0][j] = mat[0][j] + sum[0][j - 1];
    }

    // preprocess the first row
    for (ulli i = 1; i < n; i++)
    {
        sum[i][0] = mat[i][0] + sum[i - 1][0];
    }

    // preprocess the rest of the matrix
    for (ulli i = 1; i < n; i++)
    {
        for (ulli j = 1; j < m; j++)
        {
            sum[i][j] = mat[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }

    //Print sum matrix
    // cout << '\n';
    // for (ulli i = 0; i < n; i++)
    // {
    //     for (ulli j = 0; j < m; j++)
    //     {
    //         cout << sum[i][j] << '\t';
    //     }
    //     cout << '\n';
    // }
    // cout << '\n';

    // `total` is `sum[r][s] - sum[r][q-1] - sum[p-1][s] + sum[p-1][q-1]`
    // cout << "SUM[R][S] = " << sum[r][s] << '\n';
    // cout << "p = " << p << " q = " << q << '\n';
    // cout << "r = " << r << " s = " << s << '\n';
    ulli total = sum[r][s];

    if ((q) >= 1)
    {
        // cout << "in 1, and q-1 = " << q - 1 << "\n";
        total -= sum[r][q - 1];
    }

    if ((p) >= 1)
    {
        // cout << "in 2, and p-1 = " << p - 1 << "\n";
        total -= sum[p - 1][s];
    }

    if ((p) >= 1 && (q) >= 1)
    {
        // cout << "in 3, p - 1 = " << p - 1 << " and q - 1 = " << q - 1 << "\n";
        total += sum[p - 1][q - 1];
    }

    return total;
}
int main()
{
    ulli t, n, m, k, i, j, c, x, y, z, o, sum = 0;
    bool exit_flag = false;
    cin >> t;
    while (t--)
    {
        exit_flag = false;
        cin >> n >> m >> k;
        ulli **arr = new unsigned long long int *[n];
        for (i = 0; i < n; i++)
            arr[i] = new unsigned long long int[m];
        c = 0;
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] >= k)
                    c++;
            }

        if (n <= m)
            o = n;
        else
            o = m;

        for (z = 2; z <= o; z++)
        {
            for (i = 0; i <= n - z; i++)
            {
                for (j = 0; j <= m - z; j++)
                {
                    sum = findSubmatrixSum(arr, n, m, i, j, i + z - 1, j + z - 1);
                    // cout << "sum = " << sum << '\n';
                    if (sum / (z * z) >= k)
                        c++;
                }
            }
        }
        cout << c << '\n';
    }
}