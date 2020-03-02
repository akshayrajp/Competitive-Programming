#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<string>
//#include<vector>
//#include<utility>
//#include<map>
using namespace std;
//#define _p
#ifdef _p
bool isPrime(long long int n) 
{  
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (long long int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
#endif
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define REPD(i,n) for(long long int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(long long int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(long int i=(a);i>=(b);i--)
int main()
{
    return 0;
}