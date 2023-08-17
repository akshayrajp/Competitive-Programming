#include <iostream>
using namespace std;
int main()
{
    int n, a, b, i, c = 0;
    cin >> n >> a >> b;
    for (i = 1; i <= n; i++)
    {
        if (i > a && n - i <= b)
            c++;
    }
    cout << c << endl;
    return 0;
}