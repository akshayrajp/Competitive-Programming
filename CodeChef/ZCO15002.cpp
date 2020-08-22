#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long long int n, k, i, j, c=0; 
  cin >> n >> k;
  int arr[n];
  for(i = 0; i < n; i++)
    cin >> arr[i];
  for(i = 0; i < n-1; i++)
  {
    for(j = i+1; j < n; j++)
    {
      if(abs(arr[i]-arr[j]) <= k)
        c++;
    }
  }
  cout << c;
  return 0;
}
