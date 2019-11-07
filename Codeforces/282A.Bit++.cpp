#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0; cin>>n;
    string ip;
    while(n--)
    {
        cin>>ip;
        if(ip.at(0)=='+'||ip.at(2)=='+') x++;
        else x--;
    }
    cout<<x;
    return 0;
}
