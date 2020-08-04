#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    multiset<int> vehicles, pump1, pump2;
    multiset<int>::reverse_iterator rit;
    int n;
    while (cin >> n)
        vehicles.insert(n);
    for (rit = vehicles.rbegin(); rit != vehicles.rend(); ++rit)
    {
    }
}