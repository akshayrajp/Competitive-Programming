#include <iostream>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 42)
            break;
        else
            cout << n << '\n';
    }
    return 0;
}