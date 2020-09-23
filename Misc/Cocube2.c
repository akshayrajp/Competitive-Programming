#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *DectoNBase(int n, int num)
{
    int index = 0, rem;
    char *res = malloc(100 * sizeof(char));
    char temp;
    while (num > 0)
    {
        rem = num % n;
        if (rem >= 0 && rem <= 9)
            temp = (char)(rem + '0');
        else
            temp = (char)(rem - 10 + 'A');
        res[index++] = temp;
        num /= n;
    }
    res[index] = '\0';
    strrev(res);

    return res;
}

int main()
{
    int inputNum = 5678, base = 21;
    char *res = DectoNBase(base, inputNum);
    printf("%s", res);
    return 0;
}
