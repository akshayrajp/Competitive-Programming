#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % n == 0)
        cout << n;
    else
        cout << n - 1;
}