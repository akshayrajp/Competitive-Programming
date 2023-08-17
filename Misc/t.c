#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPowerOfThree(int n)
{
    double x = (log(n) / log(3));
    double y = (long long int)x;
    printf("X = %lf, Y = %lf\n",x,y);
    if (x - y == 0.00)
        return true;
    else
        return false;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (isPowerOfThree(n))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

