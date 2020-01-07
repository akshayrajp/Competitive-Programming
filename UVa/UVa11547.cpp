#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		n = (((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10);
		cout << abs(n % 10) << endl;
	}
	return 0;
}