#include <stdio.h>
#include <string.h>
int findTotalDistance(int input1, int input2[])
{
	int sum = 0, t, i;
	for(i = 0; i < input1 - 1; i++)
	{

		t = input2[i] - input2[i+1];
		if(t > 0)
			sum += t;
		if(t < 0)
			sum += (t * -1);
	}
	return sum;
}
int main()
{
	int input1 = 5;
	int input2[] = {10, 11, 7, 12, 14};
	printf("%d",findTotalDistance(input1, input2));
	return 0;
}

