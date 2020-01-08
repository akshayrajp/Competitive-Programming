/*
Akshay K Rajpurohit
17P61A0405
Unique Code: 8504
*/
#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
	long long int n, i, j;
	// n is the number of chemical solutions.
	// i and j are loop variables.
	cin >> n;
	long long int arr[n];
	set<long long int> tarr;
	set<long long int>::iterator it;
	// An array 'arr' of size 'n' to store each solution.
	// A set 'tarr' has been created to make it easier to search for elements.
	// iterator 'it' is used to store the address of the element if it is found according to the given condition.
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		tarr.insert(arr[i]);
	}
	sort(arr, arr + n);
	// Sorting makes the job easier and faster.
	for (i = 0; i < n - 1; i++)
	{
		it = tarr.end();
		for (j = i + 1; j < n; j++)
		{
			it = (tarr.find(arr[i] + arr[j]));
			if (it != tarr.end())
			{
				cout << arr[i] << " " << arr[j] << " " << *it;
				return 0;
			}
		}
	}
	cout << -1;
	return 0;
}