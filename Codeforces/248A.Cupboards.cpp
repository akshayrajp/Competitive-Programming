#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,i,sl=0,sr=0; cin>>n;
    long cup[n][2]; for(i=0;i<n;i++){cin>>cup[i][0]>>cup[i][1];}
    for(i=0;i<n;i++)
    {
        if(cup[i][0]==0) sl++;
        if(cup[i][1]==0) sr++;
    }
    cout<<min(sl,n-sl)+min(sr,n-sr);
    return 0;
}
