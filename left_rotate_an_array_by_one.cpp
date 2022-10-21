#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for(int i = 0; i<sizeOfArray; i++){
        cin>>arr[i];
    }
    int temp = arr[0];
    for(int i = 1; i<sizeOfArray; i++){
        arr[i-1] = arr[i];
    }
    arr[sizeOfArray -1] = temp;
    for(int i = 0; i<sizeOfArray; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}