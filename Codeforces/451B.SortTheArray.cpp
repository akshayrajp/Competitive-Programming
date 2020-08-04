#include <iostream>
#include <algorithm>
using namespace std;
bool sorted(int arr[], int n, int start, int end)
{
    int i;
    int tempArr[n], tempArr2[n];
    for (i = 0; i < n; i++)
        tempArr[i] = arr[i], tempArr2[i] = arr[i];
    reverse(tempArr + start, tempArr + end + 1);
    sort(tempArr2, tempArr2 + n);
    for (i = 0; i < n; i++)
        if (tempArr[i] != tempArr2[i])
            return false;
    return true;
}
int main()
{
    int n, i, start = 0, end = 0, c = 0;
    cin >> n;
    int arr[n], tempArr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        tempArr[i] = arr[i];
    }
    // Check if the array is already sorted.
    bool isSorted = true;
    sort(tempArr, tempArr + n);
    for (i = 0; i < n; i++)
    {
        if (arr[i] != tempArr[i])
            isSorted = false;
    }
    if (isSorted)
        cout << "yes\n1 1";
    // If not
    else
    {
        bool greaterThan = false;
        for (i = 0; i < n - 1; i++)
        {
            while (arr[i] > arr[i + 1])
            {
                i++;
                greaterThan = true;
            }
            if (greaterThan == true)
            {
                c++;
                greaterThan = false;
            }
        }
        while (c--)
        {
            for (i = end; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    start = i;
                    break;
                }
            }
            for (i = start; i < n - 1; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                    end = i;
                    break;
                }
            }
            if (end == 0)
                end = n - 1;
            isSorted = sorted(arr, n, start, end);
            if (isSorted)
            {
                cout << "yes\n"
                     << start + 1 << " " << end + 1;
                return 0;
            }
        }
        cout << "no";
    }
    return 0;
}