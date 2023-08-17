#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	vector<string> all;
	string temp;
	cin >> N;

	for(int i=0;i<N;i++)
	{
		cin >> temp;
		all.push_back(temp);
	}
	
	int count = 0;

	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(all[i].strcmp(arr[j])) count++;
		}
	}
	cout << count << endl;
	return 0;
}
