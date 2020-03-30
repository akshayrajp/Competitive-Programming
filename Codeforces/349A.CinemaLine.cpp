#include <iostream>
using namespace std;
int main()
{
    int n, i, t, sum = 0;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin >> t;
        if (i == 0)
        {
            if (t != 25)
            {
                cout << "NO";
                return 0;
            }
            else
                sum += t;
        }
        else if (i != 0)
        {
            if (sum - t >= 0)
                sum += 25;
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}