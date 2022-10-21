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

    // for(int i = 1; i < noOfBars -1; i++){
    //     int leftMax = bars[i];
    //     for(int j = 0; j < i; j++){
    //         leftMax = max(leftMax, bars[j]);
    //     }
    //     int rightMax = bars[i];
    //     for(int j = i +1; j< noOfBars; j++){
    //         rightMax = max(rightMax, bars[j]);
    //     }
    //     waterStored += (min(leftMax, rightMax) - bars[i]);
    // }  // time complexity = theta(n^2)


    int leftMax[noOfBars], rightMax[noOfBars];
    leftMax[0] = bars[0];
    for(int i = 1; i < noOfBars; i++){
        leftMax[i] = max(leftMax[i-1], bars[i]);
    }

    rightMax[noOfBars-1] = bars[noOfBars-1];
    for(int i = noOfBars - 2; i >= 0; i--){
        rightMax[i] = max(rightMax[ i + 1], bars[i]);
    }
    for(int i = 1; i < noOfBars - 1; i++){
        waterStored += (min(rightMax[i], leftMax[i]) - bars[i]);
    }  // time complexity = theta(n)

    cout<<waterStored;
    return 0;
}

// done
// https://leetcode.com/problems/trapping-rain-water/