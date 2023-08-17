#include <iostream>
using namespace std;
int main()
{
    long long int n, i, temp;
    cin >> n;
    bool num[n] = {false};
    for (i = 0; i < n - 1; i++)
    {
        cin >> temp;
        num[temp - 1] = true;
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] == false)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}