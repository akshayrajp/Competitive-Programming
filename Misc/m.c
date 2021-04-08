#include <stdio.h>
int findOddEvenDifference(int input1, int input2[])
{
	int i, odd = 0, even = 0;
       	for(i = 0; i < input1; i++)
	{
		if(input2[i] % 2 == 0)
			even += input2[i];
		else
			odd += input2[i];
	}
	return odd - even;
}
int main()
{
	int n, i;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	printf("%d",findOddEvenDifference(n,arr));
	return 0;
	}

