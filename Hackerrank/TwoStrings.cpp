#include <iostream>
#include <string>
#include <map>
using namespace std;
void commonExists(string a, string b)
{
    int l1 = a.length(), l2 = b.length(), i;
    map<char, int> char_freq;

    for (i = 0; i < l1; i++)
        char_freq[a[i]]++;

    for (i = 0; i < l2; i++)
        if (char_freq[b[i]] > 0)
        {
            cout << "YES\n";
            return;
        }
    cout << "NO\n";
    return;
}
int main()
{
    int n, i;
    string a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a.length() <= b.length())
            commonExists(a, b);
        else
            commonExists(b, a);
    }
    return 0;
}