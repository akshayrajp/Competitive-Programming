#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;
    guest += host;
    sort(guest.begin(), guest.end()), sort(pile.begin(), pile.end());
    if (guest == pile)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
