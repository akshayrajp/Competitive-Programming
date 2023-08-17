#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, mishka = 0, chris = 0;
    cin >> n;
    pair<int, int> throws[n];
    for (i = 0l; i < n; i++)
    {
        cin >> throws[i].first >> throws[i].second;
        if (throws[i].first > throws[i].second)
            mishka++;
        else if (throws[i].first < throws[i].second)
            chris++;
    }
    if (mishka > chris)
        cout << "Mishka";
    else if (chris > mishka)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}