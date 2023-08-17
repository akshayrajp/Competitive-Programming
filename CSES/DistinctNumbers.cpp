#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<long long int> distinct;
    long long int i, n, temp, c = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        distinct.push_back(temp);
    }
    sort(distinct.begin(), distinct.end());
    for (i = 1; i < n; i++)
    {
        if (distinct[i] != distinct[i - 1])
            c++;
    }
    cout << c + 1;
    return 0;
}