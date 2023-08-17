#include <iostream>
using namespace std;
unsigned long long int absolute(unsigned long long int a)
{
    if(a < 0)
        return  -1 * a;
    else 
        return a;
}
int main()
{
    int t;
    cin >> t;
    unsigned long long int a, b;

    while(t--)
    {
        cin >> a >> b;
        if((absolute(a - b) > 3) || ((a % 2 == 0 && b % 2 == 0) && (a == b)))
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
        }           
    }
    return 0;   
}