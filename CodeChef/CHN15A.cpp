#include <iostream>
using namespace std;
int main()
{

    int tc; // testcases
    
    cin >> tc;

    int n, k, i ,j, c =0, temp;

    for(i = 0; i < tc; i++)
    {
        cin >> n >> k;
        c = 0;
        for(j = 0; j < n; j++)
        {
            cin >> temp;

            if((temp + k) % 7 == 0)
                c++;
        }
        cout << c << '\n';
    }
    return 0;
}