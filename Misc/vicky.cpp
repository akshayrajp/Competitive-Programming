#include <iostream>
#include <string>
using namespace std;
string sxor(string a, string b)
{
	string res = "";
	for(int i = 0; i < 8; i++)
	{
		if(a[i] == b[i])
			res += '0';
		else
			res += '1';
	}
	return res;
}
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}
int main()
{
	string ip;
	string first, second, message, msg;
	int i;
	cin >> ip;
	first = ip.substr(0, 8);
	second = ip.substr(8, 8);
	message = ip.substr(16);
	if(message.size()/8 != binaryToDecimal(second))
		cout << "Invalid packet";
	else
	{
		for(i = 0; i < message.size(); i+=8)
		{
			msg = message.substr(i, 8);
			cout << (char)binaryToDecimal(sxor(first,msg));
		}
	}
	return 0;
}
