#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int n, i, j, c = 0;
    cin >> n;
    pair<int, int> bottles[n];
    bool exist = true;
    for (i = 0; i < n; i++)
        cin >> bottles[i].first >> bottles[i].second;
    for (i = 0; i < n; i++)
    {
        exist = false;
        for (j = 0; j < n; j++)
        {
            if (i != j && bottles[i].first == bottles[j].second)
            {
                exist = true;
                break;
            }
        }
        if (exist == false)
            c++;
    }
    cout << c;
    return 0;
}