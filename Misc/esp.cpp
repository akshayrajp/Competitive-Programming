#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string ip;
	cin >> ip;

	int i;
	for(i = 0; i < ip.length() - 1; i+=2)
		swap(ip[i], ip[i+1]);

	cout << ip;
	return 0;
}
