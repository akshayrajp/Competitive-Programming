//Combination Lock
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, res;
    cin >> a >> b >> c >> d;
    while (a || b || c || d)
    {
        res = 1080;
        res += (a - b) > 0 ? (a - b) * 9 : (a - b + 40) * 9; // 360/40 = 9
        res += (c - b) > 0 ? (c - b) * 9 : (c - b + 40) * 9;
        res += (c - d) > 0 ? (c - d) * 9 : (c - d + 40) * 9;
        cout << res << endl;
        cin >> a >> b >> c >> d;
    }
    return 0;
}