#include <bits/stdc++.h>
using namespace std;
bool checkIfExists(vector<pair<long int, long int>> indices, long int a, long int b)
{
    for (long int i = 0; i < indices.size(); i++)
    {
        if (indices[i].first == a && indices[i].second == b || indices[i].first == b && indices[i].second == a)
            return true;
    }
    return false;
}
int main()
{
    long int n, k, i, j;
    cin >> n >> k;
    long int cities[n], capital[k];
    long long price = 0;
    for (i = 0; i < n; i++)
        cin >> cities[i];

    vector<pair<long int, long int>> indices;
    indices.push_back(make_pair(0, n - 1));

    for (i = 1; i < n; i++)
    {
        price += cities[i] * cities[i - 1];
        indices.push_back(make_pair(i, i - 1));
    }

    price += cities[n - 1] * cities[0];

    // cout << "Sup";

    // for (i = 0; i < indices.size(); i++)
    //     cout << indices[i].first << " " << indices[i].second << '\n';

    for (i = 0; i < k; i++)
        cin >> capital[i];

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (capital[i] - 1 == j || checkIfExists(indices, capital[i] - 1, j))
                continue;
            else
            {
                price += (cities[capital[i] - 1]) * cities[j];
                indices.push_back(make_pair(capital[i] - 1, j));
            }
        }
        cout << price;
        return 0;
    }
}