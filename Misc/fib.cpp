#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> duplicates;
    int i, n, t;
    cout << "Enter the size of the array \n";
    cin >> n;
    cout << "Enter the elements of the array \n";

    for (i = 0; i < n; i++)
    {
        cin >> t;
        duplicates.push_back(t);
    }

    // sort(duplicates.begin(), duplicates.end());

    for (i = 0; i < n - 1; i++)
    {
        if (duplicates[i] == duplicates[i + 1])
        {
            duplicates.erase(duplicates.begin() + i);
        }
    }

    cout << "The array without any duplicates:\n";
    for (auto it = duplicates.begin(); it != duplicates.end(); ++it)
        cout << *it << '\n';
}
