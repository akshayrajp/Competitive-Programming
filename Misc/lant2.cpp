#include <iostream>
using namespace std;
int main()
{
	long long int n, temp, rev = 0, i;
	cin >> n;
	temp = n;

	while(temp > 0)
    	{
        	rev = (rev * 10) + (temp % 10);
        	temp /= 10;
    	}
	cout << n - rev;
	return 0;
}
