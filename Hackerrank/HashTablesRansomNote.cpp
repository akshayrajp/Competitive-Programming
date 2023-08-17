#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> word_freq;
    int m, n, i;
    string temp;
    cin >> m >> n;

    for (i = 0; i < m; i++)
    {
        cin >> temp;
        word_freq[temp]++;
    }

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (word_freq[temp] == 0)
        {
            cout << "No";
            return 0;
        }
        word_freq[temp]--;
    }
    cout << "Yes";
    return 0;
}