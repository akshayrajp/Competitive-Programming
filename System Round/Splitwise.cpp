#include <iostream>
#include <sstream>
#include <map>
#include <utility>
#include <string>
#include <vector>
using namespace std;

struct user
{
    string id;
    map<string, int> moneyOwed;
};

int getID(string ip)
{
    if (ip == "u1")
        return 0;
    else if (ip == "u2")
        return 1;
    else if (ip == "u3")
        return 2;
    else if (ip == "u4")
        return 3;
    else
        return 4;
}

int abs(int n)
{
    if (n >= 0)
        return n;
    else
        return 0 - n;
}

int main()
{
    int i, id, total = 0;
    int paid_id, owed_id;
    user u[4];
    for (i = 0; i < 4; i++)
        u[i].id = "u" + to_string(i + 1);

    // Assuming that 'END' or EOF indicates the end of expenses
    string ip, word, user_who_paid, type;
    vector<string> tokens;
    int expense, no_of_users;
    while (getline(cin, ip))
    {
        if (ip == "END")
            break;
        else if (ip == "SHOW")
        {
            for (i = 0; i < 4; i++)
            {
                if (u[i].moneyOwed.size() == 0)
                    continue;
                else
                {
                    for (auto j = u[i].moneyOwed.begin(); j != u[i].moneyOwed.end(); j++)
                    {
                        if (j->second == 0)
                            continue;
                        cout << u[i].id << " owes " << j->first << ": " << j->second << '\n';
                    }
                }
            }
            continue;
        }

        // Now, we parse the string
        // The format to be followed is
        // EXPENSE <user-id-of-person-who-paid> <no-of-users> <space-separated-list-of-users> <EQUAL/EXACT/PERCENT> <space-separated-values-in-case-of-non-equal>

        // stringstream class check1
        stringstream check1(ip);
        // Tokenizing w.r.t. space ' '
        while (getline(check1, word, ' '))
        {
            tokens.push_back(word);
        }

        expense = stoi(tokens[0]);

        user_who_paid = tokens[1];

        no_of_users = stoi(tokens[2]);

        string users[no_of_users];
        for (i = 3; i < 3 + no_of_users; i++)
            users[i - 3] = tokens[i];

        type = tokens[3 + no_of_users];

        // 1000 u1 4 u1 u2 u3 u4 EQUAL
        // 1250 u1 2 u2 u3 EXACT 370 880
        // 1200 u4 4 u1 u2 u3 u4 PERCENT 40 20 20 20

        if (type == "EQUAL")
        {
            for (i = 0; i < no_of_users; i++)
            {
                if (users[i] == user_who_paid)
                    continue;

                owed_id = getID(users[i]);
                paid_id = getID(user_who_paid);

                u[owed_id].moneyOwed[user_who_paid] += abs(u[paid_id].moneyOwed[users[i]] - (expense / 4));

                // We have to check if the user who paid owes any money to the user who owes money to the user who paid.
                // if (u[paid_id].moneyOwed[users[i]] >= u[owed_id].moneyOwed[user_who_paid])
                // {
                //     u[paid_id].moneyOwed[users[i]] -= u[owed_id].moneyOwed[user_who_paid];
                // }
            }
        }
        else
        {
            int temp = 3 + no_of_users + 1;
            int non_equal[no_of_users];
            for (i = temp; i < temp + no_of_users; i++)
                non_equal[i - temp] = stoi(tokens[i]);

            if (type == "EXACT")
            {
                for (i = 0; i < no_of_users; i++)
                {
                    if (users[i] == user_who_paid)
                        continue;
                    u[getID(users[i])].moneyOwed[user_who_paid] += abs(u[getID(user_who_paid)].moneyOwed[users[i]] - non_equal[i]);
                }
            }
            else if (type == "PERCENT")
            {
                for (i = 0; i < no_of_users; i++)
                {
                    if (users[i] == user_who_paid)
                        continue;

                    u[getID(users[i])].moneyOwed[user_who_paid] += abs(u[getID(user_who_paid)].moneyOwed[users[i]] - (non_equal[i] / 100 * expense));
                }
            }
        }
        tokens.clear();
        ip.clear();
    }
    return 0;
}