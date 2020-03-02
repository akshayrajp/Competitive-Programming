#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip; cin>>ip;
    if(islower(ip[0])) ip[0]-=32;
    cout<<ip;
    return 0;
}
