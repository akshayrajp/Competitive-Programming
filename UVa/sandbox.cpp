#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>
#include <utility>
using namespace std;
bool cmp(pair<string, string> &a,
         pair<string, string> &b)
{
    return a.second < b.second;
}
int main()
{
    vector<pair<string, string>> lib, ret;
    vector<pair<string, string>>::iterator it, it2, it3, pos1, pos2;
    string buffer, author;
    set<string> temp;
    set<string>::iterator itr;
    int end_count = 0, i, j, start, end;
    size_t found;

    for (i = 0; i < 5; i++)
    {
        getline(cin, buffer);
        found = buffer.find("\"", 1);
        lib.push_back({("\"" + buffer.substr(1, found)), (buffer.substr(found + 5, buffer.size()))});
        buffer.clear();
    }

    // Sort by author
    sort(lib.begin(), lib.end(), cmp);

    //Sorting by title if author is same
    for (i = 0; i < lib.size() - 1; i++)
    {
        if (lib[i].second == lib[i + 1].second)
        {
            start = i;
            while (lib[i].second == lib[i + 1].second)
            {

                temp.insert(lib[i].first);
                temp.insert(lib[i + 1].first);
                i++; // you can mess up here
            }
            end = i;
            // cout << start << " " << end << endl;
            for (j = start, itr = temp.begin(); j <= end; j++, itr++)
                lib[j].first = *itr;
            temp.clear();
        }
    }

    for (i = 0; i < 5; i++)
        cout << lib[i].first << '\t' << lib[i].second << '\n';
}