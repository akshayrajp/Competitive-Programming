#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <utility> 
using namespace std;
int main()
{
    int n, m, i;
    cin >> n >> m;
    map <string, pair<long long int, long long int>> listings;
    string temp;
    long long int a, b, temp_cash[3], c, tot = 0;
    for(i = 0; i < 3; i++)
        temp_cash[i] = 0;
    
    for(i = 0; i < m; i++)
    {
        cin >> temp >> a >> b;
        listings[temp].first += a;
        listings[temp].second += b;
    }

    // Zulian + Razzashi + Hakkari
    if(listings["Zulian"].second == 0 || listings["Razzashi"].second == 0 || listings["Hakkari"].second == 0)
        temp_cash[0] = -1, a = -1;
    else
    {
        temp_cash[0] = listings["Zulian"].second + listings["Razzashi"].second + listings["Hakkari"].second;
        a = min(listings["Zulian"].first, min(listings["Razzashi"].first, listings["Hakkari"].first));    
    }

    // Sandfury + Skullsplitter + Bloodscalp
    if(listings["Sandfury"].second == 0 || listings["Skullsplitter"].second == 0 || listings["Bloodscalp"].second == 0)
        temp_cash[1] = -1, b = -1;
    else
    {
        temp_cash[1] = listings["Sandfury"].second + listings["Skullsplitter"].second + listings["Bloodscalp"].second;
        b = min(listings["Sandfury"].first, min(listings["Skullsplitter"].first, listings["Bloodscalp"].first));
    }

    // Gurubashi + Vilebranch + Witherbark
    if(listings["Gurubashi"].second == 0 || listings["Vilebranch"].second == 0 || listings["Witherbark"].second == 0)
        temp_cash[2] = -1, c = -1;
    else
    {
        temp_cash[2] = listings["Gurubashi"].second + listings["Vilebranch"].second + listings["Witherbark"].second;
        c = min(listings["Gurubashi"].first, min(listings["Vilebranch"].first, listings["Witherbark"].first));    
    }
    
    vector<pair<long long int, long long int>> price;

    price.push_back(make_pair(a, temp_cash[0]));
    price.push_back(make_pair(b, temp_cash[1]));
    price.push_back(make_pair(c, temp_cash[2]));

    sort(price.begin(), price.end());

    for(i = price.size() - 1; i >= 0; i--)
    {
        if(price[i].second == -1 || price[i].first == -1)
            continue;
        n -= price[i].first;
        tot += price[i].second;
        //cout << "N = " << n << " total = " << tot << '\n';
        if(n <= 0)
            break;
    }

    if(n > 0)
        cout << "impossible";
    else 
        cout << tot;
    return 0;
}