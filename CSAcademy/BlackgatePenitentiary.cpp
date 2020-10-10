#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
using namespace std;

bool sortbysec(const pair<string, int> &a,
               const pair<string, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    vector<pair<string, int>> prisoner;
    int n, i, height, temp;
    string name;
    set<string> holding;
    set<string>::iterator it;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> name >> height;
        prisoner.push_back(make_pair(name, height));
    }

    sort(prisoner.begin(), prisoner.end(), sortbysec);

    for (i = 0; i < n; i++)
    {
        height = prisoner[i].second;
        temp = i;

        while (prisoner[i].second == height)
        {
            holding.insert(prisoner[i].first);
            i++;
        }

        for (it = holding.begin(); it != holding.end(); it++)
            cout << *it << ' ';

        cout << temp + 1 << ' ' << i << '\n';
        holding.clear();
        i--;
    }
    return 0;
}