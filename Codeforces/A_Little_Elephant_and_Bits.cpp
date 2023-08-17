#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string ip;
    cin >> ip;
    size_t found = ip.find("0");
    if (found == string::npos)
        ip.pop_back();
    else
        ip.erase(ip.begin() + found);
    cout << ip;
    return 0;
}