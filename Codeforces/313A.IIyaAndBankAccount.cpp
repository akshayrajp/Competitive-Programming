#include <iostream>
using namespace std;
int main()
{
    long long ip, ult, penult;
    cin >> ip;
    if (ip == -10)
        cout << 0;
    ult = ip, penult = ip;
    ult /= 10;
    short t = penult % 10;
    penult /= 10;
    penult += t;
    if (ip > ult && ip > penult)
        cout << ip;
    else if (ult > ip && ult > penult)
        cout << ult;
    else
        cout << penult;
    return 0;
}