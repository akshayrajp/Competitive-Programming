#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip;
    getline(cin, ip);

    // Assuming that we use EASCII -> 1 byte or 8-bit character set (Total characters = 256)
    // If we were to use ASCII -> 7-bit character set (Total characters = 128)
    int c = 0, i;

    for (i = 0; i < ip.length() - 1; i++)
    {
        if (ip[i] == ip[i + 1])
            c++;
        else
        {
            cout << ip[i] << c + 1;
            c = 0;
        }
    }
    cout << ip[i] << c + 1;
    return 0;
}