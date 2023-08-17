#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, i, j, numSwaps = 0;
    cin >> n;
    long long int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                numSwaps++;

    sort(arr, arr + n);

    cout << "Array is sorted in " << numSwaps << " swaps.\n";
    cout << "First Element: " << arr[0] << '\n';
    cout << "Last Element: " << arr[n - 1] << '\n';

    return 0;
}