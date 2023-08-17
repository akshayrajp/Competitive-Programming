#include <iostream>
using namespace std;
int main()
{
	int n, i, j, sum = 0;
	cin >> n;
	int arr[n];
	for(i = 0; i < n; i++)
		cin >> arr[i];
	for(i = 0; i < n - 1; i++)
	{
		for(j = i+1; j < n; j++)
		{
			sum += arr[i] * arr[j];
		}
	}
	cout << sum;
	return 0;
}
