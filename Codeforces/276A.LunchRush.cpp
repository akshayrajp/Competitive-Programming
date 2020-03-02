#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,x,y; cin>>n>>k;
    vector<pair<long long int,long long int>> rest;
    for(i=0;i<n;i++){cin>>x>>y; rest.push_back(make_pair(x,y));}
    sort(rest.begin(),rest.end());
    for(i=0;;i++)
    {
        if(rest[i].second==k){cout<<rest[i].first; return 0;}
        else if(rest[i].second>k){if(i>0){cout<<rest[i-1].first; return 0;}}
    }
    cout<<-1;
    return 0;
}
