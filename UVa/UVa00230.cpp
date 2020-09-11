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
void bookshelf_Sorter(vector<pair<string, string>> &lib)
{
    set<string> temp;
    set<string>::iterator itr;
    int end_count = 0, i, j, start, end, c = 0;
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
                i++;
            }
            end = i;
            for (j = start, itr = temp.begin(); j <= end; j++, itr++)
                lib[j].first = *itr;
            temp.clear();
        }
    }
}
int main()
{
    vector<pair<string, string>> lib, ret, lib_cpy;
    vector<pair<string, string>>::iterator it;
    string buffer;
    set<string> temp;
    set<string>::iterator itr;
    int end_count = 0, i, j, start, end, c = 0;
    size_t found;

    while (getline(cin, buffer) && end_count < 2)
    {
        if (buffer == "END")
        {
            end_count++;
            if (end_count == 1)
            {
                lib_cpy = lib;
                bookshelf_Sorter(lib_cpy);
            }
            if (end_count == 2)
                break;
        }
        if (end_count == 0)
        {
            found = buffer.find("\"", 1);
            lib.push_back({("\"" + buffer.substr(1, found)), (buffer.substr(found + 4, buffer.size()))});
            buffer.clear();
        }
        else if (end_count == 1)
        {
            if (buffer.substr(0, 6) == "BORROW")
            {
                for (it = lib.begin(); it != lib.end(); it++)
                    if (it->first == buffer.substr(7, buffer.size()))
                        break;
                lib.erase(it);
            }
            else if (buffer.substr(0, 6) == "RETURN")
            {
                found = buffer.find("\"", 1);
                ret.push_back({("\"" + buffer.substr(1, found)), (buffer.substr(found + 4, buffer.size()))});
                buffer.clear();
            }
            else if (buffer.substr(0, 6) == "SHELVE")
            {
                bookshelf_Sorter(lib);
                bookshelf_Sorter(ret);
                // Now, all we have to do is arrange the returned books.
                // First, we have to search for the author of the book.
                // If that author has multiple books, then we have to arrange the book acc to title
                // If he doesn't, then we can insert the book acc to author's name.
                for (i = 0; i < ret.size(); i++)
                {
                    c = 0;
                    // find the number of books by the author
                    for (j = 0; j < lib_cpy.size(); j++)
                    {
                        if (ret[i].second == lib_cpy[j].second)
                            c++;
                    }
                    // If there's only one book by the author
                    if (c == 1)
                    {
                        for (j = 0; j < lib.size(); j++)
                        {
                            if (lib[j].second > ret[i].second && j > 0)
                            {
                                cout << "Put " << ret[i].first << " after " << lib[j - 1].first << '\n';
                                lib.insert(lib.begin() + j - 1, ret[i]);
                            }
                            else if (lib[j].second > ret[i].second && j == 0)
                            {
                                cout << "Put " << ret[i].first << " first" << '\n';
                                lib.insert(lib.begin() + 0, ret[i]);
                            }
                        }
                    }
                    else if (c > 1)
                    {
                        // Find the author's section
                        for (j = 0; j < lib.size(); j++)
                        {
                            if (lib[j].second == ret[i].first)
                                break;
                        }
                        for (j = j; j < lib.size(); j++)
                        {
                            if (lib[j].first > ret[i].first && j > 0)
                            {
                                cout << "Put " << ret[i].first << " after " << lib[j - 1].first << '\n';
                                lib.insert(lib.begin() + j - 1, ret[i]);
                            }
                            else if (lib[j].first > ret[i].first && j == 0)
                            {
                                cout << "Put " << ret[i].first << " first" << '\n';
                                lib.insert(lib.begin() + 0, ret[i]);
                            }
                        }
                    }
                }
                cout << "END\n";
            }
        }
    }
    return 0;
}