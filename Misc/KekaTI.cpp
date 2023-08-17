#include <iostream>
using namespace std;
int main()
{
    // Input: [1,12,-5,-6,50, 3], k = 4 Output: 12.75

    int n, k, i, j, sum = 0, max = 0;
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    for (i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    max = sum;
    for (i = k; i < n; i++)
    {
        sum += arr[i];
        sum -= arr[i - k];

        if (sum > max)
            max = sum;
    }

    cout << (float)max / k;

    return 0;
}