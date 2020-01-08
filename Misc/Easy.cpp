#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ip; 
	long long int i = 0;
	getline(cin,ip);
	while(i!=ip.length())
	{
		if(ip[i]!='/')
		{
			cout<<ip[i];
			i++;
		}
		else
		{
			cout<<'/';
			while(ip[i]=='/')
				i++;
		}
	}
	return 0;
}
		