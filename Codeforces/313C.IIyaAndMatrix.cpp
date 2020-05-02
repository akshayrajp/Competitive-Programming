#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    unsigned long long int n, i, temp, sum = 0;
    cin >> n;
    multiset<unsigned long long int> mat;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        mat.insert(temp);
    }
    multiset<unsigned long long int>::reverse_iterator rit;
    multiset<unsigned long long int>::iterator it;
    rit = mat.rbegin();
    sum += *rit;
    while (1)
    {
    }
    return 0;
}