#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip; cin>>ip;
    int l=0,u=0,i;
    for(i=0;i<ip.length();i++)
    {
        if(islower(ip[i])) l++;
        else u++;
    }
    if(u>l) transform(ip.begin(),ip.end(),ip.begin(),::toupper);
    else transform(ip.begin(),ip.end(),ip.begin(),::tolower);
    cout<<ip;
    return 0;
}
