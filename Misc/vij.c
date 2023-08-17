#include <stdio.h>
int fun(int c)
{
	printf("%d ", c);
	if(c < 3)
	{
		c = c + 2;
		fun(fun(c));
	}
	return c;
}
int main()
{
	printf("%d",fun(1));
	return 0;
}

