#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip;
    cin >> ip;
    int freq[26], i, c = 0;
    for (i = 0; i < 26; i++)
        freq[i] = 0;
    for (i = 0; i < ip.length(); i++)
        freq[ip[i] - 97]++;
    for (i = 0; i < 26; i++)
    {
        if (freq[i] & 1 == 1)
            c++;
    }
    if (c & 1 == 1 || c == 0)
        cout << "First";
    else
        cout << "Second";
}