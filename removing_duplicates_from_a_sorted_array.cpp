#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for(int i = 0; i < sizeOfArray; i++){
        cin>>arr[i];
    }
    int realSize = 1;
    for(int i = 0; i < sizeOfArray; i++){
        if(arr[i] != arr[realSize - 1]){
            arr[realSize] = arr[i];
            realSize++;
        }
    }
    cout<<realSize<<endl;
    for(int i = 0; i < realSize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}