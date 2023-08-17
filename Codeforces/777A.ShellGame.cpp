#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
    short x;
    cin >> n >> x;
    bool pos[] = {false, false, false};
    pos[x] = true;
    n %= 6;
    while (n--)
    {
        if (n % 2 == 0)
            swap(pos[1], pos[0]);
        else
            swap(pos[1], pos[2]);
    }
    // cout << pos[0] << " " << pos[1] << " " << pos[2] << endl;
    if (pos[0])
        cout << 0;
    else if (pos[1])
        cout << 1;
    else
        cout << 2;
    return 0;
}