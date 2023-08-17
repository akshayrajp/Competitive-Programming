#include <stdio.h>
int main()
{
	int numItems, target;
	scanf("%d%d", &numItems, &target);

	int items[numItems], i, j;
	for(i = 0; i < numItems; i++)
		scanf("%d", &items[i]);

	for(i = 0; i < numItems - 1; i++)
	{
		for(j = i + 1; j < numItems; j++)
		{
			if(items[i] + items[j] == target)
			{
				printf("%d %d", i, j);
				return 0;
			}
		}
	}
	printf("-1");
	return 0;
}

