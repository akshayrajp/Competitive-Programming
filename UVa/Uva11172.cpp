//Relational Operator
#include <iostream>
using namespace std;
int main()
{
    int t;
    long a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        a > b ? cout << '>' << endl : (a < b ? cout << '<' << endl : cout << '=' << endl);
    }
    return 0;
}