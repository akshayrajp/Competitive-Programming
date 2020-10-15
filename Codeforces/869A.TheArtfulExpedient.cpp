#include <iostream>
#include <cstring>
#define Maxn 4000007
bool exists[Maxn];
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    long long int a[n], b[n], c =0;

    memset(exists,false,sizeof(exists));

    c = 0;

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        exists[a[i] - 1] = true;
    }
    
    for(i = 0; i < n; i++)
    {
        cin >> b[i];
        exists[b[i] -1] = true;
    }

    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(exists[(a[i] xor b[j]) - 1])
                c++;
        }
    }
 
    if(c % 2 == 0)
        cout << "Karen";
    else
        cout << "Koyomi";
 
}