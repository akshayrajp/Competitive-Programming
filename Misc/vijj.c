#include <stdio.h>
int fun(int n)
{
	if(n == 4)
		return n;
	else
		return 2 * fun(n + 1);
}
int main()
{
	printf("%d", fun(4));
	return 0;
}

