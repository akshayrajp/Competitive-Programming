#include <iostream>
#include <cmath>
using namespace std;
unsigned long long int noOfZeroes(unsigned long long int n)
{
    // Number of zeroes = Floor(n/5) + Floor(n/25) + Floor(n/125) ...
    unsigned long long int c = 0;

    for(unsigned long long int i = 5; (n/i) >= 1; i *= 5)
        c += floor(n/i);
    return c;
}
int main()
{
    unsigned long long int n;
    cin >> n;
    cout << noOfZeroes(n) << '\n';
    return 0;
}