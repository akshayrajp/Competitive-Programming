#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	int arr[n][3];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		sort(arr[i], arr[i] + 3);
		cout << "Case " << i + 1 << ": " << arr[i][1] << endl;
	}
	return 0;
}