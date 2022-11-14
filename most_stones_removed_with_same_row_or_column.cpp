#include <bits/stdc++.h>

using namespace std;

int removeStones(vector<vector<int>> &stones)
{
    int removedStones = 0;
    //            0 1

    //         0  0 0
    //         1  0 1
    //         2  1 0
    //         3  1 2
    //         4  2 1
    //         5  2 2
    bool found = false;
    for (int i = stones.size() - 1; i >= 0; i--)
    {
        if (found){
            found = false;
        }
        for (int k = i - 1; k >= 0; k--)
        // for (int j = stones[i].size() - 1; j >= 0; j--)
        {
            if (found){
                found = false;
                break;
            }
            // for (int k = i - 1; k >= 0; k--)
            for (int j = stones[i].size() - 1; j >= 0; j--)
            {
                if (stones[i][j] == stones[k][j])
                {
                    removedStones++;
                    found = true;
                    break;
                }
            }
        }
    }
    return removedStones;
}


int main(){
    int row, column;
    cin>>row>>column;

    vector<vector<int>> stones;
    int element;
    for (int i = 0; i < row; i++) {
        // Vector to store column elements
        vector<int> v1;
  
        for (int j = 0; j < column; j++) {
            cin>>element;
            v1.push_back(element);
        }
        // Pushing back above 1D vector
        // to create the 2D vector
        stones.push_back(v1);
    }
    cout<<removeStones(stones);
    // for (int i = 0; i < stones.size(); i++) {
    //     for (int j = 0; j < stones[i].size(); j++)
    //         cout << stones[i][j] << " ";
    //     cout << endl;
    // }
    return -1;
}

// not done
// https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/
