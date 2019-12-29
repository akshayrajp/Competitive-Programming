#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pin;
    vector<int> base, p;

    char c1 = getchar_unlocked();
    char c2 = getchar_unlocked();
    while (c1 != '\n')
    {
        if (c2 == ',' || c2 == '\n')
        {
            base.push_back(c1 - '0');
            if (c2 != '\n')
            {
                c1 = getchar_unlocked();
                c2 = getchar_unlocked();
            }
            else
                break;
        }
        else
        {
            base.push_back((c1 - '0') * 10 + (c2 - '0'));
            getchar_unlocked();
            c1 = getchar_unlocked();
            c2 = getchar_unlocked();
        }
    }

    for (int i = 0; i < 100; ++i)
    {
        for (int j = 0; j < 100; ++j)
        {
            p = base;
            pin = 0;
            p[1] = i;
            p[2] = j;

            while (p[pin] != 99)
            {
                if (p[pin] == 1)
                    p[p[pin + 3]] = p[p[pin + 1]] + p[p[pin + 2]];
                else if (p[pin] == 2)
                    p[p[pin + 3]] = p[p[pin + 1]] * p[p[pin + 2]];
                pin += 4;
            }

            if (p[0] == 19690720)
                printf("%d , %d", i, j);
        }
    }
}
