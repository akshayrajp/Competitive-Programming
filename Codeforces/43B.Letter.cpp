#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;
int main()
{
  string s1, s2;
  int i;
  map<char, int> freq;
  for (i = 0; i < 26; i++)
  {
    freq[(char)(i + 65)] = 0;
    freq[(char)(i + 97)] = 0;
  }

  getline(cin, s1);
  getline(cin, s2);

  for (i = 0; i < s1.length(); i++)
  {
    if (s1[i] != ' ')
      freq[s1[i]]++;
  }
  for (i = 0; i < s2.length(); i++)
  {
    if (s2[i] != ' ')
    {
      if (freq[s2[i]] == 0)
      {
        cout << "NO\n";
        return 0;
      }
      else
        freq[s2[i]]--;
    }
  }
  cout << "YES\n";
  return 0;
}
