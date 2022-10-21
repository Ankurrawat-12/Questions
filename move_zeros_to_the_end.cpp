#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for(int i = 0; i < sizeOfArray; i++){
        cin>>arr[i];
    }
    int pos = 0;
    for(int i = 0; i<sizeOfArray; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    for(int i = 0; i < sizeOfArray; i++){
        cout<<arr[i]<<" ";
    }
}