#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip; cin>>ip;
    sort(ip.begin(),ip.end());
    ip.erase(unique(ip.begin(), ip.end()), ip.end());
    if(ip.length()%2!=0) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}
