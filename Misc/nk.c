#include <stdio.h>
#include <math.h>
int main()
{
	int n, c = 0, i;
	scanf("%d", &n);
	long long int t, cbroot;

	for(i = 0; i < n; i++)
	{
		scanf("%lld", &t);
		cbroot = (long long int) cbrt((long double)(t));
		if(t - (cbroot * cbroot * cbroot) == 0)
			c++;
	}

	printf("%d", c);
	return 0;
}

