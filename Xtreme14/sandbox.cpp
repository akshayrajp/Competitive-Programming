#include <bits/stdc++.h>
using namespace std;
string detagify(string name)
{
    long long int a = 0, b = 0;
    for (a = b; a < name.length(); a++) {
        if (name[a] == '<') {
            for (b = a; b < name.length(); b++) {
                if (name[b] == '>') {
                    name.erase(a, (b - a + 1));
                    break;
                }
            }
        }
    }
    return name;
}


int main()
{
    string name, temp;
    getline(cin,name);
    
    cout << detagify(name);
}