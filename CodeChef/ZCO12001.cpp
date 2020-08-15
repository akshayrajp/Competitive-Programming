#include <iostream>
#include <utility>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
	int n,i,c=0,max_nest = 0, max_nest_pos=0,max_bracket = 0,max_bracket_pos =0;
	stack<int> brackets;
	cin >> n;
	int arr[n];
	for(i = 0; i < n; i++)
		cin >> arr[i];
	// Maximum nesting depth and pos
	for(i = 0; i < n; i++)
	{
		if(arr[i] == 1)
		{
			while(arr[i] == 1)
				c++,i++;
			max_nest = max(c,max_nest);
			c = 0;
		}
	}
	cout << max_nest << " ";
	for(i = 0; i < n; i++)
	{
		if(arr[i] == 1)
		{
			while(arr[i] == 1)
				c++,i++;	
		}
		if(c == max_nest)
		{
			max_nest_pos = i;
			break;
		}
		c = 0;
	}
	cout << max_nest_pos << " ";

	// Longest bracket sequence
	for(i = 0; i<n; i++)
	{
		if(arr[i] == 1)
			brackets.push(1);
		else
			brackets.pop();
		if(!brackets.empty())
			c++;
		else
		{
			max_bracket = max(c+1,max_bracket);
			c = 0;
		}
	}
	cout << max_bracket << " ";

	for(i = 0; i<n; i++)
	{
		if(arr[i] == 1)
			brackets.push(1);
		else
			brackets.pop();
		if(!brackets.empty())
			c++;
		else
		{
			if(c+1 == max_bracket)
			{
				max_bracket_pos = (i+2) - max_bracket;
				break;
			}
			c = 0;
		}

	}
	cout << max_bracket_pos;
	return 0;
}
