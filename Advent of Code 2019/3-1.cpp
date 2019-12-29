#include <iostream>
#include <vector>
#include <cstdio>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;
int manhattan_distance(int x, int y)
{
    return abs(4999 - x) + abs(4999 - y);
}
int main()
{
    int arr[10000][10000];
    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            arr[i][j] = 0;
    char ch, trigger;
    int s, cx = 4999, cy = 4999;
    vector<pair<int, int>> cross;
    vector<int> dist;
    while (1)
    {
        cx = 4999, cy = 4999;
        scanf("%c", &trigger);
        if (trigger == '1')
        {
            while (1)
            {
                scanf("%c%d,", &ch, &s);
                if (ch == 'U')
                    while (s != 0)
                    {
                        arr[cx][cy] = 1;
                        cy--;
                        s--;
                    }
                else if (ch == 'D')
                    while (s != 0)
                    {
                        arr[cx][cy] = 1;
                        cy++;
                        s--;
                    }
                else if (ch == 'R')
                    while (s != 0)
                    {
                        arr[cx][cy] = 1;
                        cx++;
                        s--;
                    }
                else if (ch == 'L')
                    while (s != 0)
                    {
                        arr[cx][cy] = 1;
                        cx--;
                        s--;
                    }
                else if (ch == '0' && s == -1)
                    break;
            }
        }
        else if (trigger == '2')
        {
            while (1)
            {
                scanf("%c%d,", &ch, &s);
                if (ch == 'U')
                    while (s != 0)
                    {
                        if (arr[cx][cy] == 0)
                            arr[cx][cy] = 1;
                        else
                            cross.push_back(make_pair(cx, cy));
                        cy--;
                        s--;
                    }
                else if (ch == 'D')
                    while (s != 0)
                    {
                        if (arr[cx][cy] == 0)
                            arr[cx][cy] = 1;
                        else
                            cross.push_back(make_pair(cx, cy));
                        cy++;
                        s--;
                    }
                else if (ch == 'R')
                    while (s != 0)
                    {
                        if (arr[cx][cy] == 0)
                            arr[cx][cy] = 1;
                        else
                            cross.push_back(make_pair(cx, cy));
                        cx++;
                        s--;
                    }
                else if (ch == 'L')
                    while (s != 0)
                    {
                        if (arr[cx][cy] == 0)
                            arr[cx][cy] = 1;
                        else
                            cross.push_back(make_pair(cx, cy));
                        cx--;
                        s--;
                    }
                else if (ch == '0' && s == -1)
                    break;
            }
        }
        else if (trigger == '0')
            break;
    }
    for (s = 0; s < cross.size(); s++)
        dist.push_back(manhattan_distance(cross[s].first, cross[s].second));

    sort(dist.begin(), dist.end());
    cout << dist[0];
    return 0;
}