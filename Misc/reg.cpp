#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int *pre_kmp(string pattern)
{
	int size = pattern.size();
	int *pie=new int [size];
	pie[0] = 0;
	int k=0;
	for(int i=1;i<size;i++)
	{
		while(k>0 && pattern[k] != pattern[i] )
		{
			k=pie[k-1];
		}
		if( pattern[k] == pattern[i] )
		{
			k=k+1;
		}
		pie[i]=k;
	}

	return pie;
}

bool kmp(string text,string pattern)
{
	int* pie=pre_kmp(pattern);
	int matched_pos=0;
	for(int current=0; current< text.length(); current++)
	{
		while (matched_pos > 0 && pattern[matched_pos] != text[current] )
			matched_pos = pie[matched_pos-1];

		if(pattern[matched_pos] == text[current])
			matched_pos = matched_pos+1;

		if( matched_pos == (pattern.length()) )
		{
		    return true;
			//cout<<"Pattern occurs with shift "<< current - (pattern.length() -1 );
			//matched_pos = pie[matched_pos-1];
		}
	}
	return false;
}
int main()
{
	int t, k, n;
	string ip, expr;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cin >> ip;
		expr = string(k, '*');
		if(kmp(ip,expr))
		    cout << "YES\n";
		else
		    cout << "NO\n";
	}
	return 0;
}
