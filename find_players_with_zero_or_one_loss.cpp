#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> findWinners(vector<vector<int>> &matches)
{
    //     vector<vector<int>> scoreCard;
    //     vector<int> totalLost;
    //     vector<int> zeroLost;
    //     int totalPlayers = 0;

    //     for (int i = 0; i < matches.size(); i++)
    //     {
    //         totalLost.push_back(matches[i][1]);
    //         totalPlayers = max(totalPlayers, matches[i][0]);
    //         totalPlayers = max(totalPlayers, matches[i][1]);
    //     }
    //     sort(totalLost.begin(), totalLost.end());
    //     vector<int>::iterator iter = totalLost.end();
    //     for (int j = 1; j <= totalPlayers; j++)
    //     {
    //         int count = 0;
    //         for (int i = 0; i < totalLost.size(); i++)
    //         {
    //             if (j == totalLost[i])
    //             {
    //                 count++;
    //                 break;
    //             }
    //         }
    //         if (count == 0)
    //         {
    //             zeroLost.push_back(j);
    //         }
    //     }
    //     scoreCard.push_back(zeroLost);
    //     zeroLost.clear();
    //     int previousRemoved = -1;
    //     for (int i = totalLost.size(); i > 0; i--)
    //     {
    //         if ((totalLost[i] == totalLost[i - 1]))
    //         {
    //             previousRemoved = totalLost[i];
    //         }
    //         if (totalLost[i] == previousRemoved)
    //         {
    //             totalLost.erase(iter);
    //         }
    //         iter--;
    //     }
    //     if (previousRemoved == totalLost[0])
    //     {
    //         totalLost.erase(iter);
    //     }
    //     scoreCard.push_back(totalLost);
    //     return scoreCard;
    vector<vector<int>> scoreCard;
    vector<int> totalLost;
    vector<int> zeroLost;
    vector<int> allPlayers;
    for (int i = 0; i < matches.size(); i++)
    {
        totalLost.push_back(matches[i][1]);
        allPlayers.push_back(matches[i][0]);
        allPlayers.push_back(matches[i][1]);
    }

    sort(allPlayers.begin(), allPlayers.end());
    sort(totalLost.begin(), totalLost.end());

    vector<int>::iterator iter = allPlayers.end();

    for (int i = allPlayers.size(); i > 0; i--)
    {
        if ((allPlayers[i] == allPlayers[i - 1]))
        {
            allPlayers.erase(iter);
        }
        iter--;
    }

    iter = totalLost.end();

    for (int j = 0; j < allPlayers.size(); j++)
    {
        int count = 0;
        for (int i = 0; i < totalLost.size(); i++)
        {
            if (allPlayers[j] == totalLost[i])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            zeroLost.push_back(allPlayers[j]);
        }
    }

    scoreCard.push_back(zeroLost);
    zeroLost.clear();

    int previousRemoved = -1;

    for (int i = totalLost.size(); i > 0; i--)
    {
        if ((totalLost[i] == totalLost[i - 1]))
        {
            previousRemoved = totalLost[i];
        }
        if (totalLost[i] == previousRemoved)
        {
            totalLost.erase(iter);
        }
        iter--;
    }
    if (previousRemoved == totalLost[0])
    {
        totalLost.erase(iter);
    }
    scoreCard.push_back(totalLost);
    return scoreCard;
}

int main()
{
    int matchesPlayed;
    cin >> matchesPlayed;
    vector<vector<int>> matches;
    for (int i = 0; i < matchesPlayed; i++)
    {
        vector<int> match;
        for (int i = 0; i < 2; i++)
        {
            int player;
            cin >> player;
            match.push_back(player);
        }
        matches.push_back(match);
    }
    vector<vector<int>> winners = findWinners(matches);
    cout << "[";
    for (int i = 0; i < winners.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < winners[i].size(); j++)
        {
            cout << winners[i][j] << " ";
        }
        cout << "] ";
    }
    cout << "]";

    return 0;
}