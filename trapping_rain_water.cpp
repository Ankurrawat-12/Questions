#include <iostream>

using namespace std;

int main()
{
    int noOfBars;
    cin>>noOfBars;

    int bars[noOfBars];
    for(int barPosition = 0; barPosition < noOfBars; barPosition++){
        cin>>bars[barPosition];
    }

    int waterStored = 0;

    for(int i = 1; i < noOfBars -1; i++){
        int leftMax = bars[i];
        for(int j = 0; j < i; j++){
            leftMax = max(leftMax, bars[j]);
        }
        int rightMax = bars[i];
        for(int j = i +1; j< noOfBars; j++){
            rightMax = max(rightMax, bars[j]);
        }
        waterStored += (min(leftMax, rightMax) - bars[i]);
    }

    cout<<waterStored;
    return 0;
}

// done
// https://leetcode.com/problems/trapping-rain-water/