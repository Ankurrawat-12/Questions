#include <bits/stdc++.h>

using namespace std;

// bool find132pattern(vector<int> &nums)
// {
//    set<int> unique;

//     for (auto i : nums)
//     {
//         unique.insert(i);
//     }
//     if(unique.size() < 3){
//         return false;
//     }

//     set<int>::iterator iter1 = unique.begin();
//     for (int i = 0; i < unique.size(); i++)
//     {
//         set<int>::iterator iter2 = unique.begin();
//         for (int j = i + 1; j < unique.size(); j++)
//         {
//             set<int>::iterator iter3 = unique.begin();
//             for (int k = j + 1; k < unique.size(); k++)
//             {
//                 advance(iter1, i);
//                 advance(iter2, j);
//                 advance(iter3, k);
//                 if ((i < j) && (j < k) && (*iter1 < *iter3) && (*iter3 < *iter2))
//                 {
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

bool find132pattern(vector<int> &nums)
{
    vector<int> num;
    vector<int>::iterator last;
    vector<int>::iterator it;
    last = unique(nums.begin(), nums.end());
    for (it = nums.begin(); it != last; ++it)
    {
        num.push_back(*it);
    }
    for (int i = 0; i < num.size() - 2; i++)
    {
        for (int j = i + 1; j < num.size() - 1; j++)
        {
            if (num[i] >= num[j])
            {
                continue;
            }
            for (int k = j + 1; k < num.size(); k++)
            {
                if ((num[i] < num[k]) && (num[k] < num[j]))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int size;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        nums.push_back(element);
    }

    if (find132pattern(nums))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}