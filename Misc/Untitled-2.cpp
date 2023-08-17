#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> files;
    files.insert(1);
    files.insert(2);
    files.insert(3);

    multiset<int>::iterator it;
    it = files.begin();
    int x = *it;
    advance(it, 1);
    int y = *it;
    cout << x + y;
}