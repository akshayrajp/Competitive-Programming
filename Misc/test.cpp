#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, j, sum = 0;
	string s;
	cin >> n;
	while(n--)
	{
		sum = 0;
		cin >> s;
		for(j = 0; j < s.length(); j++)
			sum += (int)s[j] - 48;
		cout << sum << " ";
	}
	return 0;
}
