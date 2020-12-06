#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cb, cp, bi, bp;
    long long int black = 0, pink = 0, total;
    cin >> n >> cb >> cp;

    while(n--)
    {
        cin >> bi >> bp;
        black += bi;
        pink += bp;
    }

    if(black % 10 == 0)
        black /= 10;
    else
    {
        black += (10 - (black % 10));
        black /= 10;
    }

    if(pink % 10 == 0)
        pink /= 10;
    else
    {
        pink += (10 - (pink % 10));
        pink /= 10;
    }

    cout << (black * cb) + (pink * cp);    
}