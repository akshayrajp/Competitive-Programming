#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, i, k;
	cin >> n;
	int arr[n];
	for(i = 0; i < n; i++)
		cin >> arr[i];
	cin >> k;
	sort(arr, arr+n, greater<int>());

	for(i = 1; i < n; i++)
	{
		if(arr[i] % k == 0)
		{
			cout << arr[i] / k;
			return 0;
		}
	}
	cout << "Not Possible";
	return 0;
}
