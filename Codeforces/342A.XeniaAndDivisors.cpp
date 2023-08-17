#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int arr[n];

    map<int, int> xenia;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        xenia[arr[i]]++;
    }


    if (xenia.size() <= 2 || xenia[5] != 0 || xenia[7] != 0)
    {
        cout << -1;
        return 0;
    }

    else
    {
        if ((xenia[6] < xenia[3]) || (xenia[2] < xenia[4]) || (xenia[1] != n / 3)
            || (xenia[2] + xenia[3] != n / 3))
        {
            cout << -1;
            return 0;
        }
        else
        {
            while (xenia[4] > 0)
            {
                cout << "1 2 4\n";
                xenia[1]--;
                xenia[2]--;
                xenia[4]--;
            }
            while (xenia[2] > 0 && xenia[6] > 0)
            {
                cout << "1 2 6\n";
                xenia[1]--;
                xenia[2]--;
                xenia[6]--;
            }
            while (xenia[3] > 0 && xenia[6] > 0)
            {
                cout << "1 3 6\n";
                xenia[1]--;
                xenia[3]--;
                xenia[6]--;
            }
        }
    }

    return 0;
}
