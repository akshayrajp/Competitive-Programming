#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string ip, op = "", temp;
    long long int freq[26], i, j, c = 0;

    for(i = 0; i < 26; i++)
        freq[i] = 0;

    cin >> ip;

    for(i = 0; i < ip.length(); i++)
        freq[ip[i] - 'A']++;
    
    for(i = 0; i < 26; i++)
    {
        if((freq[i] & 1) == 1)
            c++;
    }

    if(c > 1)
        cout << "NO SOLUTION";
    
    else
    {
        for(i = 0; i < 26; i++)
        {
            if((freq[i] & 1) == 0)
            {
                for(j = 0; j < freq[i]/2; j++)
                    op += (char)(65 + i);
            }
        }

        temp = op;

        for(i = 0; i < 26; i++)
        {
            if((freq[i] & 1) == 1)
            {
                for(j = 0; j < freq[i]; j++)
                    op += (char)(65 + i);
            }
        }

        reverse(temp.begin(), temp.end());
        op += temp;
    }

    cout << op;
    return 0;    
}