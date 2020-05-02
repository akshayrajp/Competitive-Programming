#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectlyDivisible(long long int a, long long int b)
{
    long long n = a / b;
    if (b * n == a)
        return true;
    else
        return false;
}
int main()
{
    int t;
    long long int n, i, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 2;; i++)
            if (isPerfectlyDivisible((-1 * n), (1 - pow(2, i))))
            {
                k = (-1 * n) / (1 - pow(2, i));
                cout << k << '\n';
                break;
            }
    }
    return 0;
}