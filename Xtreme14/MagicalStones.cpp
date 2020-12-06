#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, t, k;
    cin >> n;

    long long int s[n];
    vector<long long int> initial, temp;
    map<long long int, long long int> s;
    map<long long int, vector<long long int>> spells;

    for(i = 0; i < n; i++)
        initial.push_back(i+1);
    
    temp = initial;

    for(i = 0; i < n; i++)
    {
        cin >> t;
        s[i+1] = t;
    }

    cin >> k;
    
    
    



    
    
