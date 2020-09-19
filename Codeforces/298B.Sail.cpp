#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int i, t, sx, sy, ex, ey, c = 0;
    string directions;
    cin >> t >> sx >> sy >> ex >> ey;
    cin.ignore(32767, '\n');
    cin >> directions;
    for (i = 0; i < t; i++)
    {
        if (ex > sx && directions[i] == 'E')
            sx++;
        else if (ex < sx && directions[i] == 'W')
            sx--;

        if (ey > sy && directions[i] == 'N')
            sy++;
        else if (ey < sy && directions[i] == 'S')
            sy--;

        if (ex == sx && ey == sy)
            break;
    }
    if (i != t)
        cout << i + 1;
    else
        cout << -1;
    return 0;
}