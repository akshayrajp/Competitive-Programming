#include <iostream>
#include <cstdio>
using namespace std;
float CumulativeDiscount(float arr[], int n)
{
    float marked_price = 100.0;
    int i;
    for (i = 0; i < n; i++)
        marked_price = marked_price * (100.0 - arr[i]) / 100.0;
    float result = 100.0 - marked_price;
    return result;
}
int main()
{
    int n, i;
    cin >> n;
    float arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    printf("%.2f", CumulativeDiscount(arr, n));
    return 0;
}