#include <stdio.h>
int main()
{
	int n = 5, f0 = 0, f1 = 3, f, i;
	for(i = 1; i <= n; i++)
	{
		f = f0 + 1;
		printf("%d ",f);
	        f0 = f1;
		f1 = f;
	}
return 0;
}

