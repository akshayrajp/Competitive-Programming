#include<bits/stdc++.h>
using namespace std;
int main()
{
    string one,two;
    cin>>one; cin.ignore(32767,'\n'); cin>>two;
    for(int i=0;i<one.length();i++)
    {
        if(one[i]!=two[i]) cout<<1;
        else cout<<0;
    }
    return 0;
}
