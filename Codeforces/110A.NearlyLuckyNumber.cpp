#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip; cin>>ip; int i;
    unsigned long long c=0;
    for(i=0;i<ip.length();i++)
    {
        if(ip[i]=='4'||ip[i]=='7') c++;
    }
    ip=to_string(c);
    for(i=0;i<ip.length();i++)
    {
        if(ip[i]!='4'&&ip[i]!='7'){cout<<"NO";return 0;}
    }
    cout<<"YES";
    return 0;
}
