#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    short int t;
    long long int n, z, i, c = 0, temp;
    bool defeat = false;
    cin >> t;
    while (t--)
    {
        cin >> n >> z;
        long long int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<long long int>());
        i = 0;
        c = 0;
        defeat = false;
        while (true)
        {
            temp = z;
            for (i = 0; i < n; i++)
            {
                z -= a[i];
                a[i] /= 2;
                c++;

                if (z <= 0)
                    break;

                while (a[i] > a[i + 1])
                {
                    z -= a[i];
                    a[i] /= 2;
                    c++;
                }
                if (z <= 0)
                    break;
            }
            if (z <= 0)
            {
                defeat = true;
                break;
            }
            else if (z == temp)
            {
                defeat = false;
                break;
            }
        }
        if (defeat)
            cout << c << '\n';
        else
            cout << "Evacuate\n";
    }
    return 0;
}