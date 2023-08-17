#include <iostream>
using namespace std;
int main()
{
	long long int n, rem, sum = 0;
	cin >> n;
	while(n != 0)
	{
		rem = n % 10;
		n /= 10;

		if(rem % 2 == 0)
			sum += rem;
	}
	cout << sum;
	return 0;
}
