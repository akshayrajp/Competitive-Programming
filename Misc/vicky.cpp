#include <iostream>
#include <algorithm>
using namespace std;
int closestPair(int input1, int input2[])
{
	int i, j, t, result = 20000000;
	// Sort the array
	for(i = 0; i < input1 - 1; i++)
	{
		for(j = i + 1; j < input1; j++)
		{
			t = input2[i] - input2[j];
			if(t < 0)
				t *= -1;
			if(t < result)
				result = t;
		}
	}
	return result;
}
int main()
{
	int input1;
	cin >> input1;
	int input2[input1];
	for(int i = 0; i < input1; i++)
		cin >> input2[i];
	cout << closestPair(input1, input2);
	return 0;
}
