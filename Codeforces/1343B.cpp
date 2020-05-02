#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, esum = 0;
    vector<int> arr;
    cin >> t;
    while (t--)
    {
        cin >> n;
        esum = 0;
        arr.clear();
        if ((n / 2) % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                arr.push_back(2 * (i + 1));
                esum += 2 * (i + 1);
            }
        }
        int sum = 0;
        int i = 1;
        int j = 1;
        while (j < n / 2)
        {
            sum = sum + i;
            arr.push_back(i);
            i = i + 2;
            j++;
        }

        // Final Kth odd number
        int finalOdd = esum - sum;
        arr.push_back(finalOdd);

        cout << "YES\n";
        for (i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << '\n';
    }
}