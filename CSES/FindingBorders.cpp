#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ip, a, b;
    cin >> ip;
    unsigned long long int i, j, t;

    t = ip.length();

    for(i = 1, j = t - 1; i < t - 2, j >= 1; i++, j--)
    {
        a = ip.substr(0, i);
        b = ip.substr(j, t);

        if(a == b)
            cout << a.length() << ' ';
    }
    return 0;
}