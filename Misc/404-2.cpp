#include <iostream>
using namespace std;
int main()
{
	long long int n, t, i, c = 0;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> t;
		if(t > 0)
			c++;
	}
	cout << c;
	return 0;
}
