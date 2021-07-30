#include <iostream>
#include <string>
#include <algorithm>
typedef long long int lli;
using namespace std;
bool isSubSequence(string s1, string s2)
{
    lli i, j = 0;
    lli m = s1.length(), n = s2.length();
    for (i = 0; i < n && j < m; i++)
        if (s1[j] == s2[i])
            j++;
    return (j == m);
}
string decimalToBinary(lli n)
{
    string binaryNumber = "";
    lli remainder, i = 1;
    if (n == 0)
        return "0";
    while (n != 0)
    {
        remainder = n % 2;
        binaryNumber += to_string(remainder);
        n /= 2;
    }
    reverse(binaryNumber.begin(), binaryNumber.end());
    return binaryNumber;
}
lli binaryToDecimal(string s)
{
    return stoi(s, 0, 2);
}
int main()
{
    lli t, btd, i;
    string ip, dtb;
    cin >> t;
    while (t--)
    {
        cin >> ip;
        btd = binaryToDecimal(ip);
        for (i = 0; i < btd; i++)
        {
            dtb = decimalToBinary(i); 
            if (!isSubSequence(dtb, ip))
            {
                cout << dtb << '\n';
                break;
            }
        }
    }
    return 0;
}