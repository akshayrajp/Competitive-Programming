#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;
bool sortinrev(const pair<char, int> &a,
               const pair<char, int> &b)
{
    return (a.first > b.first);
}
int main()
{
    int n, k, i, res = 0;
    pair<int, char>
        freq[26];
    for (i = 0; i < 26; i++)
        freq[i].first = 0;
    string ip;
    cin >> n >> k;
    cin.ignore(32767, '\n');
    cin >> ip;
    sort(ip.begin(), ip.end());
    for (i = 0; i < ip.length(); i++)
    {
        freq[char(ip[i]) - 65].second = ip[i];
        freq[char(ip[i]) - 65].first++;
    }
    sort(freq, freq + 26, sortinrev);
    i = 0;
    while (k > 0)
    {
        if (freq[i].first <= k)
            res += freq[i].first * freq[i].first, k -= freq[i].first;
        else
        {
            res += k * k;
            break;
        }
        i++;
    }
    cout << res;
    return 0;
}