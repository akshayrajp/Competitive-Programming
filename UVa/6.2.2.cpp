#include <iostream>
#include <string>
using namespace std;
int main()
{
    string T, P, buffer;
    int pos = 0;
    while (getline(cin, buffer))
    {
        if (buffer.find(".......", 0) != string::npos)
            break;
        T += buffer + ' ';
    }
    cin >> P;
    while (true)
    {
        pos = T.find(P, pos);
        if (pos == string::npos)
            break;
        cout << pos << " ";
        pos++;
    }
    return 0;
}