#include <stdio.h>
#include <string.h>
struct Result
{
    int output1[100];
};
struct Result arrRotate(int input1, int input2[], int input3)
{

    struct Result result = {.output1 = {0}};

    int i, t;
    input3 %= input1;

    for (i = input3; i < input1; i++)
    {
        result.output1[i - input3] = input2[i];
    }

    for (i = 0; i < input3; i++)
    {
        result.output1[input1 - input3 + i] = input2[i];
    }

    return result;
}

int main()
{
    int size = 7, i;
    int arr[9] = {1, 2, 3, 4, 5, 6, 7};
    int rotate = 2;

    struct Result op = arrRotate(size, arr, rotate);

    for (i = 0; i < size; i++)
    {
        printf("%d\t", op.output1[i]);
    }
}