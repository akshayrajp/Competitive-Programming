#include <stdio.h>
int main()
{
	int a = 2, b = 3, cout, cout1;
	while(a <= 5)
	{
		b = 2;
		while(b <= 4)
		{
			b = b + 2;
			cout1 = cout1 + 1;
		}
		a = a + 1;
		cout = cout + 1;
	}
	printf("%d %d",cout, cout1);
	return 0;
}

