#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    long long int n, i, j, m, choice, l, r, sum = 0;
    cin >> n;
    vector<long long int> v, u;
    int temp;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        u.push_back(temp);
        v.push_back(temp);
    }

    sort(u.begin(), u.end());

    // Calculating prefix sum
    for (i = 1; i < n; i++)
        u[i] += u[i - 1], v[i] += v[i - 1];

    cin >> m;

    for (i = 0; i < m; i++)
    {
        cin >> choice >> l >> r;
        r -= 1;
        l <= 2 ? l = 0 : l -= 2;
        if (choice == 1)
            cout << v[r] - v[l] << '\n';
        else if (choice == 2)
            cout << u[r] - u[l] << '\n';
    }
    return 0;
}