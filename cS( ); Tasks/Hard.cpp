/*
Akshay K Rajpurohit
17P61A0405
Unique Code: 8504
*/
#include <iostream>
using namespace std;
// Function used to check if the given input is a prime number or not.
bool isPrime(int n)
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
	/* 
	t - Number of test cases.
	w1,w2,w3 - Energy required for each of the three Ways respectively.
	e - Energy that the user has.
	*/
	cin >> t;
	while (t--)
	{
		cin >> w1 >> w2 >> w3 >> e;
		// Two conditions where the answer is definitely NO:
		// First is if the energy that the user has is lesser than the energy required by each of the three ways.
		// Second is if all the three ways are prime valued.
		if (e < w1 && e < w2 && e < w3 || isPrime(w1) && isPrime(w2) && isPrime(w3))
		{
			cout << "NO" << endl;
			continue;
		}
		// With the extreme test cases aka corner test cases out of our way, we can now focus on the general conditions.
		// Either of the three paths have to satisy both conditions :
		// being composite and requiring energy <= energy of the user.
		if (w1 <= e && !isPrime(w1) || w2 <= e && !isPrime(w2) || w3 <= e && !isPrime(w3))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}