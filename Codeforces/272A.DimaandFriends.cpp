#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0,f; cin>>n;
    for(int i=0;i<n;i++){cin>>f;t+=f;} f=0;
    for(int i=1;i<=5;i++){if((t+i)%(n+1)!=1) f++;}
    cout<<f;
    return 0;
}
