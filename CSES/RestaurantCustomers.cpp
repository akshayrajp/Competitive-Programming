#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int n, i, j;
    long long int a, b, c = 0, maxi = 0;
    
    cin >> n;
    pair<long long int, long long int> arr[n];

    for(i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr[i].first = a, arr[i].second = b;
    }

    sort(arr, arr+n);

    for(i = 0; i < n; i++)
    {
        c = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[i].second > arr[j].first && arr[i].second < arr[j].second)
                c++;
        }
        maxi = max(maxi, c + 1);
    }
    cout << maxi; 
    return 0;
}