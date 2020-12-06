#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main()
{

    string T, buffer, intermediate;
    set<string> tokens;
    set<string>::iterator it;

    while (getline(cin, buffer))
    {
        if (buffer.find("end", 0) != string::npos)
            break;
        T += buffer + ' ';
    }

    // stringstream class check1
    stringstream check1(T);

    // Tokenizing w.r.t. space ' '
    while (getline(check1, intermediate, ' '))
    {
        tokens.insert(intermediate);
    }

    cout << *tokens.begin();
}