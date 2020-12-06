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
    for(long long int i = 0; i < str.size(); i++) 
    {
        if (str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?' || str[i] == '-') 
        { 
            str.insert(i++, " "); 
            //str.insert(i+1, " ");
        } 
    }
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
std::string& ltrim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    str.erase(0, str.find_first_not_of(chars));
    return str;
}
 
std::string& rtrim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}
 
std::string& trim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    return ltrim(rtrim(str, chars), chars);
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
        stop[trim(temp2)]++;
    }

    getline(cin, temp);

    stringstream check2(temp);
    while (getline(check2, temp2, ';'))
    {
        if(temp2[0] == ' ')
            continue;
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
        temp2 = deletePunctuation(detagify(temp2));
        index[trim(temp2)] += 1.0;
    }

    // MODIFY THIS!!!
    while (getline(cin, temp))
    {
        if (temp.find("endhere", 0) != string::npos)
            break;
        xml += temp + '\n';
    }

    // First, we parse <title></title>
    size_t first, last;

    first = xml.find("<title>");
    last  = xml.find("</title>");
    
    string title = deletePunctuation(addSpace(detagify(xml.substr(first + 7, (last - first - 7)))));
    title = trim(title);
    
    stringstream check3(title);
    while (getline(check3, temp2, ' '))
    {
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
        temp2 = trim(temp2);

        if(stop.find(temp2) != stop.end() || temp2.length() < 4)
            continue;
        title_map[temp2]++;
    }
    cout << "\nTITLE\n";
    for(auto xt = title_map.begin(); xt != title_map.end(); xt++)
        cout << xt->first << '\t' << xt->second << '\n';

    // Next, we parse <abstract></abstract>

    first = xml.find("<abstract>");
    last  = xml.find("</abstract>");

    string abstract = deletePunctuation(addSpace(detagify(xml.substr(first + 10, (last - first - 10)))));
    abstract = trim(abstract);

    stringstream check4(abstract);
    while (getline(check4, temp2, ' '))
    {
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
        temp2 = trim(temp2);

        if(stop.find(temp2) != stop.end()|| temp2.length() < 4)
            continue;
        abstract_map[temp2]++;
    }
    cout << "\nABSTRACT\n";
    for(auto xt = abstract_map.begin(); xt != abstract_map.end(); xt++)
        cout << xt->first << '\t' << xt->second << '\n';

    
    // Last, we parse <body></body>

    first = xml.find("<body>");
    last  = xml.find("</body>");

    string body = deletePunctuation(addSpace(detagify(xml.substr(first + 6, (last - first - 6)))));
    body = trim(body);

    stringstream check5(body);
    while (getline(check5, temp2, ' '))
    {
        transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
        temp2 = trim(temp2);

        if(stop.find(temp2) != stop.end() || temp2.length() < 4)
            continue;
        body_map[temp2]++;
    }
    cout << "\nBODY\n";
    for(auto xt = body_map.begin(); xt != body_map.end(); xt++)
        cout << xt->first << '\t' << xt->second << '\n';

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

    // for (long long int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i].first << '\t' << result[i].second << '\n';
    // }
    
    double val;
    short c = 0;
    long long int x;
    set<pair<string, double>> holding;
    for (long long int i = 0; i < result.size(); i++)
    {
        val = result[i].second;
        x = i;

        while (result[i].second == val)
        {
            holding.insert({result[i].first, result[i].second});
            i++;
        }
        for (auto kt = holding.begin(); kt != holding.end(); kt++)
        {
            cout << kt->first << ": ";
            printf("%.9f\n", kt->second);
        }
        holding.clear();
        i--;
        c++;
        if(c == 3)
            break;
    }

    return 0;
}