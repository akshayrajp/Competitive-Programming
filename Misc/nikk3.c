#include <stdio.h>
int main()
{
	int n, i, j, c, t;
	scanf("%d", &n);
	int arr[n];

	for(i = 0; i < n; i++)
		scanf("%d", & arr[i]);

	scanf("%d", &c);

	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(arr[i] < arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}

	for(i = 0; i < c; i++)
		printf("%d ", arr[i]);
	return 0;
}

