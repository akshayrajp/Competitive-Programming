#include <stdio.h>

int totalSum(int n)
{
	int sum = 0;
	while (n != 0)
   	{
       		sum += (n % 10);
       		n /= 10;
   	}
   	return sum;
}

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	sum = totalSum(n);

	while(sum > 26)
	{
		sum = totalSum(sum);
	}

	printf("%c", (char) (sum + 64));
	return 0;
}

