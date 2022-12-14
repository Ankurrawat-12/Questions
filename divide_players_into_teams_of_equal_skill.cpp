#include<bits/stdc++.h>

using namespace std;


long long dividePlayers(vector<int> &skill)
{

    int sum = 0;
    float petrol = 1.74;
    for (auto i : skill)
    {
        sum += i;
    }

    int noOfTeams = (skill.size()) / 2;
    auto teamSkill = sum / noOfTeams;
    if ((teamSkill * 10) % 10 != 0)
    {
        return -1;
    }
    vector<pair<int, int>> teams;
    for (int i = 0; i < noOfTeams; i++)
    {
        pair<int, int> team = {0, 0};
        vector<int>::iterator ptr = skill.begin() + i;
        for (int j = i + 1; j < skill.size(); j++)
        {
            ptr++;
            if (skill[i] + skill[j] == teamSkill)
            {
                team.first = skill[i];
                team.second = skill[j];
                skill.erase(ptr);
                break;
            }
            
        }
        teams.push_back(team);
        if (teams[i].first == 0 && teams[i].second == 0)
        {
            return -1;
        }
    }
    long long chemistry = 0;
    for (auto i : teams)
    {
        chemistry += (i.first * i.second);
    }
    return chemistry;
}

int main(){
    int size;
    cin>>size;
    vector<int> skills;
    for(int i = 0 ; i < size; i++){
        int element;
        cin>>element;
        skills.push_back(element);
    }
    cout<<dividePlayers(skills);
    return 0;
}