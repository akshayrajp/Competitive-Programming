#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n, k, i, c = 0;
    cin >> n >> k;

    long long int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            c++;
            k -= arr[i];
        }
    }

    cout << c;
}