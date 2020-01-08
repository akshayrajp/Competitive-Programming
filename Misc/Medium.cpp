#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n,i,j; cin>>n;
	long long arr[n];
	for(i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	for(i=2;i<n;i++)
	{
		for(j=0;j<n;)
}