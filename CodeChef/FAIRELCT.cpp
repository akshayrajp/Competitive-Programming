#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    int t, n, m, i, j;
    long long int temp, a_sum = 0, b_sum = 0, swap_count = 0;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        vector<long long int> a, b;

        for (i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for (i = 0; i < m; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        a_sum = accumulate(a.begin(), a.end(), 0);
        b_sum = accumulate(b.begin(), b.end(), 0);

        swap_count = 0;
        i = 0, j = 0;

        while (a_sum < b_sum)
        {
            a[i] = a[i] + b[m - i - 1];
            b[m - i - 1] = a[i] - b[m - i - 1];
            a[i] = a[i] - b[m - i - 1];
            swap_count++;

            a_sum = accumulate(a.begin(), a.end(), 0);
            b_sum = accumulate(b.begin(), b.end(), 0);

            i++;
        }

        cout << swap_count << '\n';
    }

    return 0;
}