#include <iostream>
using namespace std;
int main()
{
    long long int n, i;
    cin >> n;
    if (n == 2 || n == 3)
        cout << "NO SOLUTION";
    else
    {
        for (i = 2; i <= n; i += 2)
            cout << i << ' ';
        for (i = 1; i <= n; i += 2)
            cout << i << ' ';
    }
    return 0;
}