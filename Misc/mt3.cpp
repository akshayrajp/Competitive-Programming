#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
	string ip;
	cin >> ip;
	set<char> l;
	int i, j, ipl = ip.length(), c = 0;
	for(i = 0; i < ipl - 1; i++)
	{
		l.clear();
		for(j = i; j < ipl; j++)
			{
				if(l.insert(ip[j]).second == false)
					break;
				else
				{
					if(l.size() > c)
						c = l.size();
				}
			}
	}
	cout << c;
	return 0;
}
