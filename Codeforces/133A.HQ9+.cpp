#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip; cin>>ip;
    for(int i=0;i<ip.length();i++)
    {
        if(ip[i]=='H'||ip[i]=='Q'||ip[i]=='9')
        {
            cout<<"YES"; return 0;
        }
    }
    cout<<"NO";
    return 0;
}
