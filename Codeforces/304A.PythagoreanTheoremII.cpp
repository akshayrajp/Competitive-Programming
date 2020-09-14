#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n, c = 0;
    cin >> n;
    for (i = 3;; i++)
    {
        for (j = 4;; j++)
        {
            for (k = 5;; k++)
            {
                if ((i * i) + (j * j) == (k * k))
                {
                    if (k * k > n)
                    {
                        cout << c;
                        return 0;
                    }
                    c++;
                }
            }
        }
    }
}