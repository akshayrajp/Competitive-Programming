#include <iostream>
using namespace std;
int main()
{
	int k, n, m, x, y;
	while (1)
	{
		cin >> k;
		if (k == 0)
			break;
		cin >> n >> m;
		while (k--)
		{
			cin >> x >> y;
			if (x == n || y == m)
				cout << "divisa\n";
			else if (x < n && y > m)
				cout << "NO\n";
			else if (x > n && y > m)
				cout << "NE\n";
			else if (x < n && y < m)
				cout << "SO\n";
			else if (x > n && y < m)
				cout << "SE\n";
		}
	}
	return 0;
}