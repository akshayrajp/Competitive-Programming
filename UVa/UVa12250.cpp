#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int i = 0;
	while (1)
	{
		cin >> s;
		if (s == "#")
			break;
		else if (s == "HELLO")
			cout << "Case " << i + 1 << ": "
				 << "ENGLISH" << endl;
		else if (s == "HOLA")
			cout << "Case " << i + 1 << ": "
				 << "SPANISH" << endl;
		else if (s == "HALLO")
			cout << "Case " << i + 1 << ": "
				 << "GERMAN" << endl;
		else if (s == "BONJOUR")
			cout << "Case " << i + 1 << ": "
				 << "FRENCH" << endl;
		else if (s == "CIAO")
			cout << "Case " << i + 1 << ": "
				 << "ITALIAN" << endl;
		else if (s == "ZDRAVSTVUJTE")
			cout << "Case " << i + 1 << ": "
				 << "RUSSIAN" << endl;
				 ++i;
	}
	return 0;
}