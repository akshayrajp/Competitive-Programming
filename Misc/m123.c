#include <stdio.h>
int atm_currency(int input1)
{
    int count = 0, i;
    int den[4] = {2000, 500, 200, 100};
    for (i = 0; i < 4; i++)
    {
        count += input1 / den[i];
        input1 %= den[i];
    }
    return count;
}
int main()
{
    int amt;
    scanf("%d", &amt);
    printf("%d", atm_currency(amt));
    return 0;
}