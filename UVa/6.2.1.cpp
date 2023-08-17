#include <iostream>
#include <string>
using namespace std;
int main()
{
    string buffer, result;
    while (getline(cin, buffer))
    {
        if (buffer.find(".......", 0) != string::npos)
            break;
        result += buffer + ' ';
    }
    result = result.substr(0, result.length() - 1);
    cout << result;
    return 0;
}