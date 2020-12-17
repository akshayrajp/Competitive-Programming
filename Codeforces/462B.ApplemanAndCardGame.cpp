#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp(pair<char, long long int>& a, pair<char, long long int>& b)
{
    return a.second > b.second;
}

// Function to sort the map according
// to value in a (key-value) pairs
vector<long long int> sortByValue(map<char, long long int>& M)
{

    // Declare vector of pairs
    vector<pair<char, long long int> > A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M)
    {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);

    // Create a new vector with the values
    vector<long long int> res;

    for (auto& it : A)
    {
        res.push_back(it.second);
    }

    return res;
}

int main()
{
    long long int n, k, i;
    long long int op = 0;
    cin >> n >> k;

    char ch;

    map<char, long long int> char_freq;

    for (i = 0; i < n; i++)
    {
        cin >> ch;
        char_freq[ch]++;
    }

    vector<long long int> res = sortByValue(char_freq);

    for (i = 0; i < res.size(); i++)
    {
        if (k <= 0)
            break;
        if (res[i] >= k)
        {
            op += k * k;
            k = 0;
        }
        else
        {
            op += res[i] * res[i];
            k -= res[i];
        }
    }
    cout << op;
    return 0;
}
