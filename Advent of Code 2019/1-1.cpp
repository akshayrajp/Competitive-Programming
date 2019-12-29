#include <iostream>
using namespace std;
int main()
{
    long t;
    unsigned long long res = 0;
    while (1)
    {
        cin >> t;
        if (t == 0)
            break;
        res += (t / 3) - 2;
    }
    cout << res;
    return 0;
}
