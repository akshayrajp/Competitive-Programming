#include <iostream>
using namespace std;
bool isPrime(long long int n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (long long int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}
int main()
{
	int t, w1, w2, w3, e;
	cin >> t;
	while (t--)
	{
		cin >> w1 >> w2 >> w3 >> e;
		if (e < w1 && e < w2 && e < w3)
		{
			cout << "NO" << endl;
			continue;
		}
		if (isPrime(w1) && isPrime(w2) && isPrime(w3))
		{
			cout << "NO" << endl;
			continue;
		}
		if (!isPrime(w1) && !isPrime(w2) && !isPrime(w3))
		{
			if (w1 <= e || w2 <= e || w3 <= e)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			continue;
		}

		if (isPrime(w1))
		{
			if (!isPrime(w2) && w2 <= e ||
				!isPrime(w3) && w3 <= e)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else if (isPrime(w2))
		{
			if (!isPrime(w1) && w1 <= e ||
				!isPrime(w3) && w3 <= e)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else if (isPrime(w3))
		{
			if (!isPrime(w1) && w1 <= e ||
				!isPrime(w2) && w2 <= e)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
