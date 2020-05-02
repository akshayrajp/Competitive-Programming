#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<long long int> seq, sum;
    long long int x, n, i, j, s = 0;
    while (t--)
    {
        cin >> n;
        s = 0;
        seq.clear();
        sum.clear();
        for (i = 0; i < n; i++)
        {
            cin >> x;
            seq.push_back(x);
        }
        bool onlyPos = true;
        bool onlyNeg = true;
        for (i = 0; i < n; i++)
        {
            if (seq[i] < 0)
            {
                onlyPos = false;
                break;
            }
        }
        for (i = 0; i < n; i++)
        {
            if (seq[i] > 0)
            {
                onlyNeg = false;
                break;
            }
        }
        if (onlyPos || onlyNeg)
        {
            sort(seq.begin(), seq.end(), greater<long long int>());
            cout << seq[0] << '\n';
            continue;
        }
        for (i = 0; i < n - 1; i++)
        {
            s = 0;
            if (seq[i] > 0 && seq[i + 1] < 0 || seq[i] < 0 && seq[i + 1] > 0)
            {
                for (j = i; j < n - 1; j++)
                {
                    if (seq[j] > 0 && seq[j + 1] < 0 || seq[j] < 0 && seq[j + 1] > 0)
                    {
                        s += seq[j] + seq[j + 1];
                        j++;
                    }
                    else
                    {
                        sum.push_back(s);
                        s = 0;
                        i = j;
                        break;
                    }
                }
            }
        }
        sort(sum.begin(), sum.end(), greater<long long int>());
        cout << sum[0] << '\n';
    }
    return 0;
}