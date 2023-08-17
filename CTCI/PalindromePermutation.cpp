#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip;
    getline(cin, ip);
    // Assuming that we use EASCII->1 byte or 8 - bit character set(Total characters = 256)
    // If we were to use ASCII -> 7-bit character set (Total characters = 128)
    int freq[256] = {0}, i, c = 0;

    for (i = 0; i < ip.length(); i++)
    {
        // Ignore spaces
        if (ip[i] == ' ')
            continue;
        freq[ip[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (c > 1)
        {
            cout << "The given string is not a palindrome permutation.\n";
            return 0;
        }
        if (freq[i] & 1 == 1)
            c++;
    }
    cout << "The given string is a palindrome permutation.\n";
    return 0;
}