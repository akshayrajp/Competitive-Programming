#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <utility>

using namespace std;

map<string, int> frequencyTokenizer(string T)
{

    string intermediate;
    map<string, int> tokens;

    // stringstream class check1
    stringstream check1(T);

    // Tokenizing w.r.t. space ' '
    while (getline(check1, intermediate, ' '))
    {
        if (tokens.find(intermediate) == tokens.end())
            tokens.insert(pair<string, int>(intermediate, 1));
        else
            tokens[intermediate]++;
    }
    return tokens;
}

string inputProcessor()
{
    string buffer, T;
    while (getline(cin, buffer))
    {
        if (buffer.find(".......", 0) != string::npos)
            break;
        T += buffer + ' ';
    }
    return T;
}

int main()
{
    string T = inputProcessor();
    map<string, int> tokens = frequencyTokenizer(T);
    int maxOccurenceValue = 0;
    string maxOccurenceWord;
    for (auto &it : tokens)
    {
        if (it.second > maxOccurenceValue)
        {
            maxOccurenceValue = it.second;
            maxOccurenceWord = it.first;
        }
    }
    cout << maxOccurenceWord;
}