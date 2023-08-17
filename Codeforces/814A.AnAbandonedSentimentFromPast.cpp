#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, i, j;

    cin >> n >> k;

    int a[n], b[k];

    for(i = 0; i < n; i++)
        cin >> a[i];

    for(i = 0; i < k; i++)
        cin >> b[i];

    sort(b, b+k, greater<int>());

    j = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] == 0)
            a[i] = b[j++];
    }    

    for(i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i+1])
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}