#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for(int i = 0; i<sizeOfArray; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<sizeOfArray - 1; i++){
        // for(int j = i + 1; j<sizeOfArray; j++){  // time complexity = omega(n^2)
        if(arr[i] > arr[i+1]){ // time complexity = omega(n)
            cout<<"No";
            return 0;
        }
        // }
    }
    cout<<"Yes";
    return 0;
}