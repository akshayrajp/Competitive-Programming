#include <iostream>
using namespace std;
int main()
{
    long long int n, i, c = 0;
    cin >> n;
    long long int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            c += arr[i] - arr[i + 1];
            arr[i + 1] += (arr[i] - arr[i + 1]);
        }
    }
    cout << c;
    return 0;
}