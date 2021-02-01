#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ip;
	cin >> ip;
	int i;
	for(i = 0; i < ip.length(); i++)
	{
		if((ip[i] - 48) % 2 == 0)
			ip[i] += 1;
		else
			ip[i] -= 1;
	}
	cout << ip;
	return 0;
}
