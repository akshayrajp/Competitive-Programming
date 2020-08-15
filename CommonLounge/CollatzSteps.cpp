#include <iostream>
using namespace std;
long long int collatz(long long int n)
{
	if(n == 1)
		return 0;
	else if((n & 1) == 0)
		return 1 + collatz(n/2);
	else
		return 1 + collatz(3*n + 1);
}
int main()
{
	long long int n;
       	cin >> n;
	cout << "Number of steps = " << collatz(n) << '\n';
 	return 0;
}
