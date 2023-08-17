#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, k, i;
    cin >> n >> k;
    int arr[n];
    set<int> unique;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        unique.insert(arr[i]);
    }

    if (unique.size() == 1)
    {
        cout << 0;
        return 0;
    }
    else
    {
        unique.clear();

        for (i = k - 1; i < n; i++)
            unique.insert(arr[i]);

        if (unique.size() == 1)
        {
            for (i = n - 1; i >= 0; i--)
            {
                if (arr[i] != arr[n - 1])
                {
                    if (i <= k - 1)
                    {
                        cout << i + 1;
                        return 0;
                    }
                    else
                    {
                        cout << -1;
                        return 0;
                    }
                }
            }
        }
        else
        {
            cout << -1;
            return 0;
        }
    }
    return 0;
}
