#include <iostream>
using namespace std;
int main()
{
	int n,h,i,command,hook = 0; 
	bool hasBox = false;
	cin >> n >> h;
	int boxes[n];
	for(i = 0; i < n; i++)
		cin>>boxes[i];
	while(1)
	{
		cin >> command;
		if(command==0)
		{
			for(int j = 0; j < n; j++)
				cout << boxes[j] << " ";
			return 0;
		}
		if(command == 1 && hook > 0)
			hook--;
		else if(command == 2 && hook < n-1)
			hook++;
		else if(command == 3 && hasBox == false && boxes[hook] > 0)
		{
			hasBox = true;
			boxes[hook]--;
		}
		else if(command == 4 && hasBox == true && boxes[hook]+1 <= h)
		{
			hasBox = false;
			boxes[hook]++;
		}
		else
			continue;

	}	
	return 0;
}
		
