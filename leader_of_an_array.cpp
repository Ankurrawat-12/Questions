#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for(int i = 0; i<sizeOfArray; i++){
        cin>>arr[i];
    }
    // bool greater = true;
    // for(int i = 0; i < sizeOfArray; i++){
    //     for(int j = i + 1; j < sizeOfArray; j++){
    //         if(arr[i] < arr[j]){
    //             greater = false;
    //             break;
    //         }
    //     }
    //     if(greater){
    //         cout<<arr[i]<<" ";
    //     }
    //     greater = true;
    // } // time complixity = theta(n^2)

    int currentLeader = arr[sizeOfArray-1];
    cout<<currentLeader<<" ";
    for(int i = sizeOfArray - 2; i >= 0; i--){
        if(currentLeader < arr[i]){
            currentLeader = arr[i];
            cout<<currentLeader<<" ";
        }
    }  // time complixity = theta(n);
    return 0;
}