#include <iostream>
#include <string>
using namespace std;
void maxRepeating(string str)
{
    long long int n = str.length(), count = 0, cur_count = 1, i;
    for (i = 0; i < n; i++)
    {
        if (i < n - 1 && str[i] == str[i + 1])
            cur_count++;
        else
        {
            if (cur_count > count)
                count = cur_count;
            cur_count = 1;
        }
    }
    cout << count;
}
int main()
{
    string ip;
    cin >> ip;
    maxRepeating(ip);
    return 0;
}