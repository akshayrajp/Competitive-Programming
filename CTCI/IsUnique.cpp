#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip;
    int i;
    // Assuming that we use EASCII -> 1 byte or 8-bit character set (Total characters = 256)
    // If we were to use ASCII -> 7-bit character set (Total characters = 128)
    getline(cin, ip);
    // If the size of input is more than the total character set, then that must mean that some characters were repeated.
    if (ip.length() > 256)
    {
        cout << "The given string contains repeated characters.\n";
        return 0;
    }

    bool isExist[256] = {false};
    for (i = 0; i < ip.length(); i++)
    {
        // Ignore spaces
        if (ip[i] == ' ')
            continue;

        if (isExist[ip[i]])
        {
            // If we encounter the same character again, it means repeated characters exist.
            cout << "The given string contains repeated characters.\n";
            return 0;
        }
        else
            isExist[ip[i]] = true;
    }
    cout << "The given string contains only unique characters.\n";
    return 0;
}