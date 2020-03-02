#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxi=0,mini=101,t,maxi_pos,mini_pos; cin>>n; vector<int>sol;
    while(n--)
    {
        cin>>t;
        sol.push_back(t);
        if(t>maxi) maxi=t;;
        if(t<mini) mini=t;
    }
    n=sol.size();
    for(int i=0;;i++){if(sol[i]==maxi){ maxi_pos=i; break; }}
    for(int i=sol.size()-1;;i--){if(sol[i]==mini){ mini_pos=i; break; }}
    if(maxi_pos>mini_pos) mini_pos+=1;
    cout<<maxi_pos+(n-1)-mini_pos;
    return 0;
}
