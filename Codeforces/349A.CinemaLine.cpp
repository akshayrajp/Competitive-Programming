#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0, temp;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        if (sum == 0)
        {
            if (temp != 25)
            {
                cout << "NO";
                return 0;
            }
            sum += 25;
        }
        else
        {
            if (sum <= temp)
            {
                sum
            }
        }
    }