#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, i, c;
	cin >> n;
	int arr[n];

	for(i = 0; i < n; i++)
		cin >> arr[i];
	cin >> c;

	sort(arr, arr + n, greater<int>());

	for(i = 0; i < c; i++)
		cout << arr[i] << ' ';
	return 0;
}
