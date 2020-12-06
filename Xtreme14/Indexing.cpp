#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<string, int> &a,
               const pair<string, int> &b)
{
    return (a.second > b.second);
}

string detagify(string name)
{
    long long int a = 0, b = 0;
    for (a = b; a < name.length(); a++) {
        if (name[a] == '<') {
            for (b = a; b < name.length(); b++) {
                if (name[b] == '>') {
                    name.erase(a, (b - a + 1));
                    break;
                }
            }
        }
    }
    return name;
}

string addSpace(string str)
{
    replace(str.begin(), str.end(), '\n', ' ');
    return str; 
}
string deletePunctuation(string str)
{
    for (long long int i = 0, len = str.size(); i < len; i++) 
    { 
        // check whether parsing character is punctuation or not 
        if (str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?') 
        { 
            str.erase(i--, 1); 
            len = str.size(); 
        } 
    }
    return str; 
}
void removeSpaces(string &S, int n)
{
	// true when a whitespace character is found and false when
	// any non-space character is found
	bool space = false;

	// k points to next free position
	long long int k = 0;

	// iterate through the characters of the string
	for (long long int i = 0; i < n; i++)
	{
		// handle leading spaces in the string
		while (k == 0 && i < n && isspace(S[i])) {
			i++;
		}

		// if the current character is a space
		if (isspace(S[i]))
		{
			// if flag was false earlier, i.e. first occurrence of a
			// space after a word
			if (!space)
			{
				// copy current char (a whitespace) at next free index
				// and set the flag
				S[k++] = S[i];
				space = true;
			}
		}
		// if the current character is a punctuation mark
		else if (ispunct(S[i]))
		{
			// if last assigned character was a space, overwrite it
			// with the current character
			if (k > 0 && isspace(S[k-1])) {
				S[k-1] = S[i];
			}
			else {
				// copy the current character at next free index
				S[k++] = S[i];
			}
			space = false;
		}
		else {
			// copy the current character at next free index
			S[k++] = S[i];
			space = false;
		}
	}

	// handle trailing spaces in the string
	S.erase(S.begin() + k, S.end());
} 
int main()
{
    
    map<string, long long int> stop, title_map, abstract_map, body_map;
    map<string, double> index;
    string temp, temp2, xml;

    map<string, long long int>::iterator it;


    getline(cin, temp);

    stringstream check1(temp);
    while (getline(check1, temp2, ';'))
    {
        if(temp2[0] == ' ')
            continue;
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
        temp2 = deletePunctuation(detagify(temp2));
        removeSpaces(temp2, temp2.length());
        stop[temp2]++;
    }

    getline(cin, temp);

    stringstream check2(temp);
    while (getline(check2, temp2, ';'))
    {
        if(temp2[0] == ' ')
            continue;
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
        temp2 = deletePunctuation(detagify(temp2));
        removeSpaces(temp2, temp2.length());
        index[temp2] += 1.0;
    }

    // MODIFY THIS!!!
    while (getline(cin, temp))
    {
        // temp
        // if (temp.find("endhere", 0) != string::npos)
        //     break;
        xml += temp + ' ';
    }

    // First, we parse <title></title>
    size_t first, last;

    first = xml.find("<title>");
    last  = xml.find("</title>");
    
    string title = deletePunctuation(addSpace(detagify(xml.substr(first + 7, (last - first - 7)))));
    removeSpaces(title, title.length());

    transform(title.begin(), title.end(), title.begin(), ::tolower);
    stringstream check3(title);
    while (getline(check3, temp2, ' '))
    {
        removeSpaces(temp2, temp2.length());
        if(stop.find(temp2) != stop.end() || temp2.length() < 4)
            continue;
        title_map[temp2]++;
    }

    first = xml.find("<abstract>");
    last  = xml.find("</abstract>");

    string abstract = deletePunctuation(addSpace(detagify(xml.substr(first + 10, (last - first - 10)))));
    removeSpaces(abstract, abstract.length());

    transform(abstract.begin(), abstract.end(), abstract.begin(), ::tolower);

    stringstream check4(abstract);
    while (getline(check4, temp2, ' '))
    {
        removeSpaces(temp2, temp2.length());

        if(stop.find(temp2) != stop.end() || temp2.length() < 4)
            continue;
        abstract_map[temp2]++;
    }
    
    
    // Last, we parse <body></body>

    first = xml.find("<body>");
    last  = xml.find("</body>");

    string body = deletePunctuation(addSpace(detagify(xml.substr(first + 6, (last - first - 6)))));
    removeSpaces(body, body.length());

    stringstream check5(body);
    while (getline(check5, temp2, ' '))
    {
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
        removeSpaces(temp2, temp2.length());

        if(stop.find(temp2) != stop.end() || temp2.length() < 4)
            continue;
        body_map[temp2]++;
    }

    /*
    cout << "\nSTOP\n";
    for(auto xt = stop.begin(); xt != stop.end(); xt++)
        cout << xt->first << ' ' << xt->second << '\n';

    cout << "\nINDEX\n";
    for(auto xt = index.begin(); xt != index.end(); xt++)
        cout << xt->first << ' ' << xt->second << '\n';

    cout << "\nTITLE\n";
    cout << '\n' << title << '\n';
    for(auto xt = title_map.begin(); xt != title_map.end(); xt++)
        cout << xt->first << ' ' << xt->second << '\n';

    cout << "\nABSTRACT\n";
    cout << '\n' << abstract << '\n';
    for(auto xt = abstract_map.begin(); xt != abstract_map.end(); xt++)
        cout << xt->first << ' ' << xt->second << '\n';

     cout << "\nBODY\n";
     cout << '\n' << body << '\n';
    for(auto xt = body_map.begin(); xt != body_map.end(); xt++)
        cout << xt->first << '\t' << xt->second << '\n';
    */

    long long int L = 0;

    for(it = title_map.begin(); it != title_map.end(); ++it)
    {
        if((stop.find(temp2) != stop.end()) || it->first == "")
            continue;
        else
           L+= it->second; 
    }

    for(it = abstract_map.begin(); it != abstract_map.end(); ++it)
    {
        if((stop.find(temp2) != stop.end()) || it->first == "")
            continue;
        else
            L+= it->second; 
    }

     for(it = body_map.begin(); it != body_map.end(); ++it)
    {
        if((stop.find(temp2) != stop.end()) || it->first == "")
            continue;
        else
            L+= it->second; 
    }

    // Now, we multiply by factors
    // cout << L << '\n';

    for(it = title_map.begin(); it != title_map.end(); ++it)
        it->second *= 5;

    for(it = abstract_map.begin(); it != abstract_map.end(); ++it)
        it->second *= 3;

    vector<pair<string, double>> result;

    for(auto jt = index.begin(); jt!= index.end(); jt++)
    {
        jt->second = ((float)(title_map[jt->first] + abstract_map[jt->first] + body_map[jt->first])/(float)L) * 100.0;
        result.push_back(make_pair(jt->first, jt->second));
    }

    sort(result.begin(), result.end(), sortbysec);
    
    double val, val2;
    short c = 0;
    long long int x;
    set<pair<string, double>> holding;
    bool neg = false, tie = false;
    long long int i;
    for (i = 0; ; i++)
    {
        if(result[i].second > 0)
        {
            val = result[i].second;
            x = i;

            while (result[i].second == val)
            {
                val = result[i].second;
                holding.insert({result[i].first, result[i].second});
                i++;
                val2 = result[i].second;
                if(val == val2)
                tie = true;
            }
            for (auto kt = holding.begin(); kt != holding.end(); kt++)
            {
                cout << kt->first << ": ";
                printf("%.9f\n", kt->second);
            }
            holding.clear();
            i--;
            c++;
            if(c == 3 || i == result.size())
                break;
        }
        else
        {
            neg = true;
            break;
        }
        
    }   
    if(neg == false &&  tie == true)
    {
        for(; result[i+1].second == val; i++)
        {
            holding.insert({result[i].first, result[i].second});
        }
        for (auto kt = holding.begin(); kt != holding.end(); kt++)
        {
            cout << kt->first << ": ";
            printf("%.9f\n", kt->second);
        }
    }
    return 0;
}