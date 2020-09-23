#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, urlified_str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            urlified_str += "%20";
        else
            urlified_str += str[i];
    }
    cout << urlified_str;
}