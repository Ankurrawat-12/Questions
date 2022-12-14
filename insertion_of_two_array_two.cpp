#include <bits/stdc++.h>

using namespace std;

// vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
// {
//     sort(nums1.begin(), nums1.end());
//     sort(nums2.begin(), nums2.end());
//     vector<int> answer, small, large;
//     int size = min(nums1.size(), nums2.size());
//     if (nums1.size() > nums2.size())
//     {
//         small = nums2;
//         large = nums1;
//     }
//     else
//     {
//         small = nums1;
//         large = nums2;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         int top = max(nums1.size(), nums2.size()) - 1;
//         int bottom = 0;
//         int mid;
//         bool run = true;
//         while ((top >= bottom) & run)
//         {
//             mid = (top + bottom) / 2;
//             if (large[mid] == small[i])
//             {
//                 answer.push_back(small[i]);
//                 large[mid] = -1;
//                 run = false;
//             }
//             else if (large[mid] > small[i])
//             {
//                 top = mid - 1;
//             }
//             else
//             {
//                 bottom = mid + 1;
//             }
//         }
//     }
//     return answer;
// }

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> answer, small, large;
    if (nums1.size() > nums2.size())
    {
        small = nums2;
        large = nums1;
    }
    else
    {
        small = nums1;
        large = nums2;
    }
    for(int i = 0; i < small.size(); i++){
        for(int j = 0; j < large.size(); j++){
            if(small[i] == large[j]){
                answer.push_back(small[i]);
                large[j] = -1;
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> nums1, nums2;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        nums1.push_back(input);
    }
    for (int i = 0; i < m; i++)
    {
        int input;
        cin >> input;
        nums2.push_back(input);
    }

    vector<int> answer = intersect(nums1, nums2);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}