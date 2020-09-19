#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    map<string, int> num;
    string temp;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        num[temp]++;
    }
    for (auto it = num.begin(); it != num.end(); it++)
        if (it->second > (n + 1) / 2)
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
    return 0;
}