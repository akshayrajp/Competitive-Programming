#include <iostream>
using namespace std;
int main()
{
    int t, g, i, q;
    long long int n;

    cin >> t;
    while(t--)
    {
        cin >> g;
        while(g--)
        {
            cin >> i >> n >> q;
            if(!(n & 1) || i == q)
                cout << n/2 << '\n';
            else
                cout << (n/2) + 1 << '\n';    
        }
    }
}