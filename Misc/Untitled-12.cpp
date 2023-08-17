#include <iostream>
using namespace std;

int **Sort2DArrayByRow(int m, int n, int **arr)
{
    int i, j, k, t;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n - j - 1; k++)
            {
                if (arr[i][k] > arr[i][k + 1])
                {
                    t = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = t;
                }
            }
        }
    }
    return arr;
}

// Driver code
int main()
{
    int m[][4] = {{9, 8, 7, 1},
                  {7, 3, 0, 2},
                  {9, 5, 3, 2},
                  {6, 3, 1, 2}};
    int r = sizeof(m[0]) / sizeof(m[0][0]);
    int c = sizeof(m) / sizeof(m[0]);
    int **res = Sort2DArrayByRow(r, c, m);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}