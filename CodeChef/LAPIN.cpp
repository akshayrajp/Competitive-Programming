#include <iostream>
#include <string>
using namespace std;
bool isLapindrome(string a, string b)
{
    int a_freq[26] = {0}, b_freq[26] = {0}, i;

    for (i = 0; i < a.length(); i++)
        a_freq[a[i] - 97]++;

    for (i = 0; i < b.length(); i++)
        b_freq[b[i] - 97]++;

    for (i = 0; i < 26; i++)
        if (a_freq[i] != b_freq[i])
            return false;
    return true;
}
int main()
{
    int t;
    string str, a, b;
    cin >> t;
    while (t--)
    {
        cin >> str;
        if ((str.length() % 2 == 0) && isLapindrome(str.substr(0, str.length() / 2), str.substr(str.length() / 2, str.length())))
            cout << "YES\n";
        else if ((str.length() % 2 == 1) && isLapindrome(str.substr(0, str.length() / 2), str.substr(str.length() / 2 + 1, str.length())))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}