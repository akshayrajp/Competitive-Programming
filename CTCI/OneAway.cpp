#include <iostream>
#include <string>
#include <algorithm>
int absolute(int n)
{
    if (n >= 0)
        return n;
    else
        return -1 * n;
}
using namespace std;
int main()
{
    string ip1, ip2;

    getline(cin, ip1);
    getline(cin, ip2);

    int i, c = 0;
    char ch1, ch2;

    if (ip1.length() == ip2.length() || absolute(ip1.length() - ip2.length()) <= 1)
    {
        int n;
        if (ip1.length() != ip2.length())
            ip1.length() > ip2.length() ? n = ip2.length() : n = ip1.length();
        else
            n = ip1.length();

        for (i = 0; i < n; i++)
        {
            if (ip1[i] != ip2[i])
            {
                c++;
                ch1 = ip1[i];
                ch2 = ip2[i];
            }
            if (c > 1)
            {
                cout << "The second string is not one edit away from the first string.\n";
                return 0;
            }
        }
        if (ip1.length() == ip2.length())
            cout << "Replace " << ch1 << " in " << ip1 << " with " << ch2 << ".\n";
        else if (ip1.length() < ip2.length())
            cout << "Remove " << ch1 << " from " << ip2 << ".\n";
        else if (ip1.length() > ip2.length())
            cout << "Add " << ch1 << " to " << ip2 << ".\n";
    }
    else
        cout << "The second string is not one edit away from the first string.\n";
    return 0;
}