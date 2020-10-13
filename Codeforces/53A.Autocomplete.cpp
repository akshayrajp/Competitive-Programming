#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    string s, temp;
    
    set<string> words;

    set<string>::iterator it;

    cin >> s;

    int n, i;
    cin >> n;

    for(i = 0; i < n; i++)
    {
       cin >> temp;
        words.insert(temp);
    }

    size_t found;

    for(it = words.begin(); it != words.end(); it++)
    {
        temp = *it;
    
        found = temp.find(s);

        if(found == 0)
        {
            cout << temp;
            return 0;
        }
   }
   cout << s;
    return 0;
}