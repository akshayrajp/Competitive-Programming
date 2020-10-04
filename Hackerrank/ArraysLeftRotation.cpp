vector<int> rotLeft(vector<int> a, int d)
{
    d %= a.size();
    while (d--)
    {
        a.push_back(a[0]);
        a.erase(a.begin());
    }
    return a;
}