#include <iostream>
#include <string>
using namespace std;
int main()
{
    unsigned long long int a, b, n, i;
    bool div = false;
    cin >> a >> b >> n;
    for (i = 0; i <= 9; i++)
        if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s;
            div = true;
            break;
        }
    if (!div)
        cout << -1;
    return 0;
}