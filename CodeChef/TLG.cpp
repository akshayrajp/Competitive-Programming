#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct leaderboard
{
    int player1Score;
    int player2Score;
    int lead;
};

int absolute(int n)
{
    if (n < 0)
        return -1 * n;
    else
        return n;
}

bool sortByLead(const leaderboard &a, const leaderboard &b)
{
    return a.lead > b.lead;
}

int main()
{
    int n, i, prevScore1 = 0, prevScore2 = 0, currScore1 = 0, currScore2 = 0;
    cin >> n;
    vector<leaderboard> board;
    for (i = 0; i < n; i++)
    {
        board.push_back(leaderboard());
        cin >> currScore1 >> currScore2;
        board[i].player1Score = prevScore1 + currScore1;
        board[i].player2Score = prevScore2 + currScore2;
        board[i].lead = absolute(board[i].player1Score - board[i].player2Score);
        prevScore1 = board[i].player1Score, prevScore2 = board[i].player2Score;
    }

    sort(board.begin(), board.end(), sortByLead);

    board[0].player1Score > board[0].player2Score ? cout << "1 " : cout << "2 ";
    cout << board[0].lead;

    return 0;
}