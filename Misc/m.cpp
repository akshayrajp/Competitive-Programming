#include <iostream>
using namespace std;
int is_perfect(int input)
{
	int result = 1, i;
	for(i = 2; i*i <= n; i++)
		if(n % i == 0)
		{
			if(i * i != n)
				result += i + (n/i);
			else
				result += i;
		}
	if(result == n)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	cin >> n;
	if(is_perfect(n) == 1)
		cout << "Perfect";
	else
		cout << "Not Perfect";
	return 0;
}
