#include <iostream>
using namespace std;
int main()
{
    unsigned long long int t, k, d0, d1, c = 0;
    cin >> t;
    while(t--)
    {
        cin >> k >> d0 >> d1;
        c = (d0 + d1);
        while(k--)
            c += (c%10);
        
        if(c%3==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}