#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t; cin>>n; double sum=0;
    for(i=0;i<n;i++){ cin>>t; sum+=t; }
    cout<<sum/n;
    return 0;
}
