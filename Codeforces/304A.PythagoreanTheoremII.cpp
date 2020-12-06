#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
long long int binarySearch(long long int arr[], long long int l, long long int r, long long int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    }
    return -1; 
} 

int main()
{
    long long int n, c = 0, i, j;
    
    cin >> n;

    long long int squares[10000];

    for(i = 1; i <= 10000; i++)
        squares[i - 1] = i * i;

    for(i = 2; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            
                c++;
        }
    }

    cout << c + 1;
    return 0;
}