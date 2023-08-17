#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    long long int n, m, k, i, temp, c = 0;
    vector<long long int> desired, available;
    cin >> n >> m >> k;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        desired.push_back(temp);
    }
    for (i = 0; i < m; i++)
    {
        cin >> temp;
        available.push_back(temp);
    }
    auto it = desired.begin();
    for (i = 0; i < n; i++)
    {
        it = lower_bound(available.begin(), available.end(), desired[i] - k + 1);
        if (it != available.end() && *it < desired[i] + k)
            c++;
    }
    cout << c;
    return 0;
}