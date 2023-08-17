#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string ip, word;
	int c = 0;
	map<string, int> unique;
	getline(cin, ip);

	stringstream str(ip);

	while(str >> word)
		unique[word]++;

	for(auto it = unique.begin(); it != unique.end(); it++)
		if(it -> second == 1)
			c++;

	cout << c;
	return 0;
}
