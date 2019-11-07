#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,res[2]; cin>>n;
    res[0]=0,res[1]=0;
    while(n--)
    {
        cin>>a>>b;
        res[1]+=b-a;
        if(res[0]<res[1]) res[0]=res[1];
    }
    cout<<res[0];
    return 0;
}
