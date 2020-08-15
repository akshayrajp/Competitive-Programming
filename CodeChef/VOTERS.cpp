#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
	long long int n1,n2,n3,i,t;
	set  <long long int> voters, temp;
	pair<set<long long int>::iterator, bool> ret;
	cin >> n1 >> n2 >> n3;
	for(i=0;i<n1+n2+n3;i++)
	{
		cin >> t;
		ret = temp.insert(t);
		if(ret.second == false)
			voters.insert(t);
	}
	cout << voters.size() << '\n';
	for(set<long long int>::iterator it = voters.begin(); it!= voters.end(); it++)
		cout << *it << '\n';
	return 0;
}
