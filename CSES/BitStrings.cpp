#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    cout << (2 << (n-1)) % 1000000007;
    return 0;
}
