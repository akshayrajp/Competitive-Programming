#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, i, temp;
    cin >> v;
    vector<pair<int, int>> a;
    for (i = 0; i < 9; i++)
    {
        cin >> temp;
        a.push_back(make_pair(temp, i + 1));
    }
    sort(a.begin(), a.end());
    // checking for repeated minimum
    vector<pair<int, int>>::iterator t = upper_bound(a.begin(), a.end(), a[0].first);
    vector<pair<int, int>>::iterator it = upper_bound(a.begin(), a.end(), a[0].first);
    if (t == a.end())
        while (v--)
            cout << 9;
    else if (t != a.end())
    {

        it = t - a.begin() - 1;
        while (v--)
            cout << *it;
        return 0;
    }