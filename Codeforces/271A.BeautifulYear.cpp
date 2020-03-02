#include<bits/stdc++.h>
using namespace std;
int main()
{
    int yr; cin>>yr;
    int i,m,c,d,y,t;
    for(i=yr+1;;i++)
    {
        t=i;
        y=t%10; t/=10;
        d=t%10; t/=10;
        c=t%10; t/=10;
        m=t%10; t/=10;
        if(m!=c&&m!=d&&m!=y&&c!=d&&c!=y&&d!=y){cout<<i;break;}
    }
    return 0;
}
