#include <iostream>
#include <cmath>
using namespace std;
__int128_t f(__int128_t x, __int128_t y)
{
	if((y & 1) == 0)
		return pow((pow(x,y/2)) % __int128_t(41), 2) % __int128_t(41);
	else	
		return (pow((pow(x,y/2)) % __int128_t(41), 2) * x) % __int128_t(41);

}
int main()
{
	cout << f(__int128_t(14), __int128_t(98765432123456789));
	return 0;
}
