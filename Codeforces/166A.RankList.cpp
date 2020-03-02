#include <iostream>
#include <utility>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int n, k, i, j, t, y;
    cin >> n >> k;
    t = k;
    vector<pair<int, int>> ranks;
    for (i = 0; i < n; i++)
    {
        cin >> t >> y;
        ranks.push_back(make_pair(t, y));
    }
    sort(ranks.begin(), ranks.end(), greater<int>());
    i = 0;
    while (1)
    {
        if (k == 0)
            break;
        if (ranks[i].first == ranks[i + 1].first)
        {
            k--;
            while (ranks[i].first == ranks[i + 1].first)
                i++;
        }
        else
            i++, k--;
    }

    return 0;
}