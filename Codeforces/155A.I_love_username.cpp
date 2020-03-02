#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,nmin,nmax; cin>>n;
    int arr[n]; for(i=0;i<n;i++){cin>>arr[i];}
    nmin=arr[0],nmax=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<nmin){nmin=arr[i],c++;}
        else if(arr[i]>nmax){nmax=arr[i],c++;}
    }
    cout<<c;
    return 0;
}

