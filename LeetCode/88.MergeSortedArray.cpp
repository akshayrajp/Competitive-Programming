#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int>::iterator it;
    int i;
    if (m <= n)
    {
        for (i = 0; i < m; i++)
        {
            it = upper_bound(nums2.begin(), nums2.end(), nums1[i]);
            if (it != nums2.end())
                nums2.insert(it, nums1[i]);
            else
                nums2.push_back(nums1[i]);
        }
        for (i = 0; i < m + n; i++)
            cout << nums2[i] << ' ';
        return;
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            it = upper_bound(nums1.begin(), nums1.end(), nums2[i]);
            if (it != nums1.end())
                nums1.insert(it, nums2[i]);
            else
                nums1.push_back(nums2[i]);
        }
        for (i = 0; i < m + n; i++)
            cout << nums1[i] << ' ';
        return;
    }
}
int main()
{
    vector<int> nums1, nums2;
    int m, n, temp, i;
    cin >> m >> n;
    for (i = 0; i < m; i++)
    {
        cin >> temp;
        nums1.push_back(temp);
    }
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        nums2.push_back(temp);
    }
    merge(nums1, m, nums2, n);
    return 0;
}