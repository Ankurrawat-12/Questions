#include <bits/stdc++.h>

using namespace std;

int main(){
    int sizeOfArrayOne;
    int sizeOfArrayTwo;

    cin>>sizeOfArrayOne;
    cin>>sizeOfArrayTwo;

    // int big,small;
    // int arrOne[big];
    // int arrTwo[small];

    // if(sizeOfArrayOne>sizeOfArrayTwo){
    //     big = sizeOfArrayOne;
    //     small = sizeOfArrayTwo;
    // }
    // else{
    //     big = sizeOfArrayTwo;
    //     small = sizeOfArrayOne;
    // }

    // int arrOne[sizeOfArrayOne];
    // int arrTwo[sizeOfArrayTwo];

    // for(int i = 0; i < sizeOfArrayOne; i++){
    //     cin>>arrOne[i];
    // }

    // for(int i = 0; i < sizeOfArrayTwo; i++){
    //     cin>>arrTwo[i];
    // }
    
    float arr[sizeOfArrayOne+sizeOfArrayTwo];

    for (int i = 0; i < sizeOfArrayOne+sizeOfArrayTwo; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + (sizeOfArrayOne+sizeOfArrayTwo));

    if((sizeOfArrayOne+sizeOfArrayTwo)%2 != 0){
        float median = (float)arr[(sizeOfArrayOne+sizeOfArrayTwo - 2)/2 + 1];
        cout<<median;
    }
    else{
        float median = (arr[(sizeOfArrayOne+sizeOfArrayTwo - 2)/2] + arr[(sizeOfArrayOne+sizeOfArrayTwo - 2)/2 + 1]) / 2;
        cout<<median;
    }
    return 0;
    
} 

// https://leetcode.com/problems/median-of-two-sorted-arrays/
// done