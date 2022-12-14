#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.size() == 1)
    {
        return strs[0];
    }

    string prefix = strs[0];
    int min = INT_MAX;
    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i].size() < min)
        {
            min = strs[i].size();
            prefix = strs[i];
        }
        else
        {
            min = min;
        }
    }

    for (int i = 0; i <= strs.size() - 1; i++)
    {
        bool run = false;
        for (int j = 0; j < min; j++)
        {
            if(run){
                continue;
            }
            if (prefix[j] != strs[i][j])
            {
                prefix.erase(j, prefix.size());
                run = true;
                continue;
            }
        }
    }
    return prefix;
}

int main()
{
    int size;
    cin >> size;
    vector<string> s;
    for (int i = 0; i < size; i++)
    {
        string element;
        cin >> element;
        s.push_back(element);
    }

    cout << longestCommonPrefix(s);
}