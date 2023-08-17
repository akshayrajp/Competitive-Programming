#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;
int main()
{
    string ip;
    getline(cin, ip);
    set<char> letters;
    for (int i = 0; i < ip.length(); i++)
    {
        if (isalpha(ip[i]))
            letters.insert(ip[i]);
    }
    cout << letters.size();
    return 0;
}