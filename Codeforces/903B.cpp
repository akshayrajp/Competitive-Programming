#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int h1, a1, c1, h2, a2;
    vector<string> op;
    cin >> h1 >> a1 >> c1 >> h2 >> a2;
    while (h2 > 0)
    {
        if (h2 <= a1 || h1 > a2)
        {
            op.push_back("STRIKE\n");
            h2 -= a1, h1 -= a2;
        }
        else if (h1 <= a2)
        {
            op.push_back("HEAL\n");
            h1 += c1 - a2;
        }
    }
    cout << op.size() << endl;
    for (int i = 0; i < op.size(); i++)
        cout << op[i];
    return 0;
}
