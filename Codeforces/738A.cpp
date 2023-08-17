#include <iostream>
#include <string>
using namespace std;
int main()
{
    long a1, a2, a3, a4, i;
    long ca1 = 0, ca2 = 0, ca3 = 0, ca4 = 0;
    string res;
    cin >> a1 >> a2 >> a3 >> a4;
    long ta1 = a1, ta2 = a2, ta3 = a3, ta4 = a4;
    //N(74) = N(47)-1 and the reverse holds true as well
    if (a3 > a4)
    {
        for (i = 0; i < a3; i++)
        {
            res += "47";
            if (i % 2 != 0)
                a4--;
        }
        for (i = 0; i < a4; i++)
            res += "74";
    }
    else if (a4 > a3)
    {
        for (i = 0; i < a4; i++)
        {
            res += "74";
            if (i % 2 != 0)
                a3--;
        }
        for (i = 0; i < a3; i++)
            res += "47";
    }
    else if (a3 == a4)
        for (i = 0; i < a3; i++)
            res += "4774";
    for (i = 0; i < res.length() - 1; i++)
    {
        if (res[i] == '4' && res[i + 1] == '7')
            ca3++;
        else if (res[i] == '7' && res[i + 1] == '4')
            ca4++;
    }
    for (i = 0; i < res.length(); i++)
    {
        if (res[i] == '4')
            ca1++;
        else
            ca2++;
    }
    if (ta1 == ca1 && ta2 == ca2 && ta3 == ca3 && ta4 == ca4)
        cout << res;
    else
        cout << -1;
    return 0;
}