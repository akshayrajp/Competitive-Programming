#include <iostream>
#include <string>
#include <map>
#include <cctype>
using namespace std;
int main()
{
    string buffer;
    map<char, int> freq;
    map<char, int>::iterator it;
    int i, max = 0;
    while (getline(cin, buffer))
    {
        for (i = 0; i < 26; i++)
        {
            freq[(char)(i + 65)] = 0;
            freq[(char)(i + 97)] = 0;
        }

        for (i = 0; i < buffer.length(); i++)
            if (isalpha(buffer[i]))
                freq[buffer[i]]++;

        // find max
        for (it = freq.begin(); it != freq.end(); ++it)
        {
            if (it->second > max)
                max = it->second;
        }
        // print out all chars who have the max freq
        for (it = freq.begin(); it != freq.end(); ++it)
        {
            if (it->second == max)
                cout << it->first;
        }
        cout << " " << max << '\n';
        max = 0;
    }
    return 0;
}