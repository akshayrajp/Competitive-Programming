#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,c=1;
    while(1){cin>>n; if(n==1) break; else c++;}
    i=c/5,j=c%5; if(j==0) j=5; else i+=1;
    cout<<abs(i-3)+abs(j-3);
    return 0;
}
