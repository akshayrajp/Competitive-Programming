#include <stdio.h>
#include "./m.c"
#include "./x.c"
int main()
{
    one();
    two();
    printf("%d", isPrime(29));
    return 0;
}
