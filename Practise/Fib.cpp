#include <iostream>
using namespace std;
int fib1(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else 
        return fib1(n - 1) + fib1(n - 2);
}
long long int fib2(long long int n, long long int* arr)
{
    if(n == 0 || n == 1)
        return 1;
    else if(arr[n] != 0)
        return arr[n];
    long long int output = fib2(n - 1, arr) + fib2(n - 2, arr); 
    arr[n] = output;
    return output;
}
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n+1];
    for(long long int i = 0; i < n + 1; i++)
        arr[i] = 0;
    cout << fib2(n, arr);
    return 0;
}