#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int cbroot, n, c = 0, i, t;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> t;
		cbroot = round(cbrt(t));
		if(cbroot * cbroot * cbroot == t)
			c++;
	}
	cout << c;
	return 0;
}
