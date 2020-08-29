#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    string buffer, input, temp;
    vector<string> tokens;
    vector<string>::iterator it;
    int i;
    while (getline(cin, buffer))
    {
        if (buffer == "0")
            break;
        input += buffer + '\n';
    }
    buffer.clear();
    for (i = 0; i < input.length(); i++)
    {
        if (isalpha(input[i]))
            buffer += input[i];
        else if (isdigit(input[i]))
        {
            while (isdigit(input[i]))
            {
                temp += input[i];
                i++;
            }
            i--;
            cout << tokens[stoi(temp) - 1];
            temp.clear();
        }
        else if (!isalnum(input[i]))
        {
            cout << buffer;
            while (!isalnum(input[i]))
            {
                cout << input[i];
                i++;
            }
            i--;
            it = find(tokens.begin(), tokens.end(), buffer);
            if (it != tokens.end())
                tokens.erase(it);
            tokens.insert(tokens.begin(), buffer);
            buffer.clear();
        }
    }
    return 0;
}