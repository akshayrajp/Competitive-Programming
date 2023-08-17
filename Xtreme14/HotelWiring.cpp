#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long int i, sum = 0;
    cin >> t;
    while (t--) {
        int m, n, k, a;
        cin >> m >> n >> k;
        vector < pair < long long int, long long int >> v;
        while (m--) {
            cin >> a;
            v.push_back(make_pair(n - a, a));
        }
        sort(v.begin(), v.end());
        for (i = v.size() - 1; i >= 0; i--) {
            if (k > 0)
                sum += v[i].first;
            else
                sum += v[i].second;
            k--;
        }
        cout << sum << '\n';
        sum = 0;
    }
    return 0;
}