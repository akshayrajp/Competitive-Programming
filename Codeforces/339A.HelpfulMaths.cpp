#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip,op; cin>>ip;
    int one=0,two=0,three=0,i;
    for(i=0;i<ip.length();i+=2)
    {
        if(ip[i]=='1') one++;
        else if(ip[i]=='2') two++;
        else three++;
    }
    while(one>0||two>0||three>0)
    {
        if(one!=0){op+="1+";one--;}
        else if(two!=0&&one==0){op+="2+";two--;}
        else if(three!=0&&two==0&&one==0){op+="3+";three--;}
    }
    op.pop_back(); cout<<op;
    return 0;
}
