#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
}
int main()
{
    vector<int> nums1, nums2;
    int m, n, temp, i;

    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> temp;
        nums1.push_back(temp);
    }
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        nums2.push_back(temp);
    }

    merge(nums1, m, nums2, n);
    return 0;
}