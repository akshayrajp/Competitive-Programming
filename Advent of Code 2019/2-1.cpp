#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
    vector<int> arr;
    int t;
    while (1)
    {
        scanf("%d,", &t);
        if (t == -1)
            break;
        else
            arr.push_back(t);
    }
    arr[1] = 12, arr[2] = 2;
    for (t = 0; t < arr.size(); t += 4)
    {
        if (arr[t] == 99)
            break;
        else if (arr[t] == 1)
        {
            arr[arr[t + 3]] = arr[arr[t + 1]] + arr[arr[t + 2]];
        }
        else if (arr[t] == 2)
        {
            arr[arr[t + 3]] = arr[arr[t + 1]] * arr[arr[t + 2]];
        }
    }
    cout << arr[0];
    return 0;
}
