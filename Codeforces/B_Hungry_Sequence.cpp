#include <iostream>
using namespace std;
bool isPrime(long long int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    int c = 0, i = 2, n;
    cin >> n;
    while (n != c)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            c++;
        }
        i++;
    }
    return 0;
}