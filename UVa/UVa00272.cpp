//TEX Quotes
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip;
    bool opening = true;
    while (getline(cin, ip))
    {
        for (string::iterator i = ip.begin(); i < ip.end(); i++)
        {
            if (*i == '\"')
            {
                if (opening == true)
                    cout << "``";
                else
                    cout << "''";
                opening = !opening;
            }
            else
                cout << *i;
        }
    }
    return 0;
}