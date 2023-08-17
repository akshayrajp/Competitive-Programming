#include <stdio.h>
int main()
{
	int num, i, j, flag = 0, left, right, setLeft = 0, setRight = 0;
	scanf("%d", &num);

	int arr[num];

	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);

	i = 0;

	while (1)
	{
		flag = 0;

		setLeft = 0;
		setRight = 0;

		if (arr[i] != -1 && arr[i + 1] != -1)
		{
			left = i;
			right = i + 1;
		}

		else if (arr[i] == -1 || arr[i + 1] == -1)
		{
			for (j = i; j >= 0; j--)
			{
				if (arr[j] != -1)
				{
					left = j;
					setLeft = 1;
					break;
				}
			}
			if (setLeft == 0)
				left = 0;

			for (j = i + 1; j < num; j++)
			{
				if (arr[j] != -1)
				{
					right = j;
					setRight = 1;
					break;
				}
			}

			if (setRight == 0)
				right = num - 1;
		}

		if (arr[left] < arr[right])
		{
			arr[right] = -1;
			flag = 1;
		}

		/* Uncomment to see the working of the Algorithm
		printf("Iteration #%d\n", i + 1);
		for (j = 0; j < num; j++)
			printf("%d ", arr[j]);
		printf("\n");
		*/

		i++;

		if (flag == 0 && i == num - 1)
			break;

		if (i == num - 1)
			i = 0;
	}
	// Printing output
	for (i = 0; i < num; i++)
	{
		if (arr[i] != -1)
			printf("%d ", arr[i]);
	}
	return 0;
}

