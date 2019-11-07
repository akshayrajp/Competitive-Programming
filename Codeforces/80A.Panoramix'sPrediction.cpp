#include<bits/stdc++.h>
int isPrime(int n);
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    for(int i=n+1;i<m;i++){if(isPrime(i)==1){cout<<"NO"; return 0;}}
    if(isPrime(m)==1){cout<<"YES"; return 0;}
    else cout<<"NO";
    return 0;
}
int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
