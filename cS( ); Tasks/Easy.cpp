/*
Akshay K Rajpurohit
17P61A0405
Unique Code: 8504
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ip;
	long long int i = 0;
	// ip - to store the input
	// i - to iterate through the string
	getline(cin, ip);
	while (i != ip.length())
	{
		// Loop through the entire string.
		// As long as the character is not '/', print it, and increment the iterator by 1.
		if (ip[i] != '/')
		{
			cout << ip[i];
			i++;
		}
		else
		{
			// If the character is '/', then print it just once, and keep incrementing the iterator by 1 as long
			// as the value of the character is '/'. As soon as the character is non-'/', come out of the loop.
			cout << '/';
			while (ip[i] == '/')
				i++;
		}
	}
	return 0;
}
