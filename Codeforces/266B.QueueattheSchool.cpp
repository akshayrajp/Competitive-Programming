#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i; cin>>n>>t;
    string ip; cin>>ip;
    while(t--)
    {
        for(i=0;i<n-1;i++)
        {
            if(ip[i]=='B'&&ip[i+1]=='G')
                {swap(ip[i],ip[i+1]),i++;}
        }
    }
    cout<<ip;
    return 0;
}
