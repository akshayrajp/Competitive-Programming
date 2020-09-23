#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip1, ip2;
    // Assuming that we use EASCII -> 1 byte or 8-bit character set (Total characters = 256)
    // If we were to use ASCII -> 7-bit character set (Total characters = 128)
    int freq1[256] = {0}, freq2[256] = {0}, i;

    getline(cin, ip1);
    getline(cin, ip2);

    for (i = 0; i < ip1.size(); i++)
    {
        if (ip1[i] == ' ')
            continue;
        else
            freq1[ip1[i]]++;
    }

    for (i = 0; i < ip2.size(); i++)
    {
        if (ip2[i] == ' ')
            continue;
        else
            freq2[ip2[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            cout << "The given strings are not permutations of each other.\n";
            return 0;
        }
    }
    cout << "The given strings are permutations of each other.\n";
    return 0;
}