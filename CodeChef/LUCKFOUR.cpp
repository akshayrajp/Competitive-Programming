#include <iostream>
#include <string>
using namespace std;
int main()
{
    int tc, i, c = 0;
    string ip;

    cin >> tc;

    while(tc--)
    {
        cin >> ip;

        c = 0;
        for(i = 0; i < ip.length(); i++)
        {
            if(ip[i] == '4')
                c++;
        }
        cout << c << '\n';
    }
    return 0;
}