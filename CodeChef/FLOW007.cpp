#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t, i;
    string n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = n.length() - 1; i >= 0; i--)
        {
            if (n[i] != '0')
                break;
            else
                n.pop_back();
        }
        reverse(n.begin(), n.end());
        cout << n << '\n';
    }
    return 0;
}