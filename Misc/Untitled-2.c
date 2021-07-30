#include <stdio.h>
#include <string.h>
char *nextGreater(char *input1, int input2)
{
    int i, j;

    int x = input1[i - 1], smallest = i;

    for (j = i + 1; j < input2; j++)
        if (input1[j] > x && input1[j] < input1[smallest])
            smallest = j;

    char temp = input1[smallest];
    input1[smallest] = input1[i - 1];
    input1[i - 1] = temp;

    for (j = i; j < input2; j++)
    {
        if (input1[i] > input1[j])
        {
            char temp = input1[i];
            input1[i] = input1[j];
            input1[j] = temp;
        }
    }
    return input1;
}
int main()
{
    char *ok = "123";
    char *nextok = nextGreater(ok, 3);
    printf("%s", nextok);
}