#include <iostream>
using namespace std;
int main()
{
}
int FindCount(int arr[], int length)
{
	int i, c =0;
	for(i = 0; i < length; i++)
	{
		if((i % 2 == 0) && (arr[i] % 2 == 0) ||
			(i % 2 != 0) && (arr[i] % 2 !=0))
			c++;