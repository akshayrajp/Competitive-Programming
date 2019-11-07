#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n; long d,i,c=0;
    cin>>k>>l>>m>>n>>d;
    for(i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0) c++;
    }
    cout<<c;
    return 0;
}
