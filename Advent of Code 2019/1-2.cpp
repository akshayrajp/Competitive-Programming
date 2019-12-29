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
        while (1)
        {
            t /= 3;
            t -= 2;
            if (t > 0)
                res += t;
            else
                break;
        }
    }
    cout << res;
    return 0;
}