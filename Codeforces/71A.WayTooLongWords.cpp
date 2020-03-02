#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;                                                                                                                                                                                                                                                                                                                                             string ip; cin>>n;
    while(n--)
    {
        cin>>ip;
        if(ip.length()>10){cout<<ip[0]<<ip.length()-2<<ip.back()<<endl;}
        else cout<<ip<<endl;
    }
    return 0;
}
