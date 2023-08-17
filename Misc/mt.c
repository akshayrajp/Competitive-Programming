#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char str[100000];
	scanf("%s", str);

	long long int freq[52], i, c = 0;

	for(i = 0; i < 52; i++)
		freq[i] = 0;

	for(i = 0; i < strlen(str); i++)
	{
		if(isupper(str[i]))
			freq[str[i] - 38]++;
		else
			freq[str[i] - 97]++;
	}

	for(i = 0; i < 52; i++)
		if(freq[i] == 1)
			c++;

	printf("%lld", c);
	return 0;
}

