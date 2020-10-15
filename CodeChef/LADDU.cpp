#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int t, c, laddus = 0, temp;
    string activity, origin;
    
    cin >> t;
    while(t--)
    {
        cin >> c >> origin;
        laddus = 0;

        while(c--)
        {
            cin >> activity;
            if(activity == "TOP_CONTRIBUTOR")
                laddus += 300;
            else if(activity == "CONTEST_WON")
            {
                cin >> temp;
                if(temp <= 20)
                    laddus += (300 + (20 - temp));
                else
                    laddus += 300;
            }
            else if(activity == "BUG_FOUND")
            {
                cin >> temp;
                laddus += temp;
            }
            else if(activity == "CONTEST_HOSTED")
            laddus += 50;
        }

        if(origin == "INDIAN")
            cout << laddus / 200 << '\n';
        else
            cout << laddus / 400 << '\n';
    }
    return 0;
}