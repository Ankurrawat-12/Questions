#include<iostream>

using namespace std;

void leftRotate(int arr[], int sizeOfArray, int toShift);
void reverse(int arr[], int low, int high);

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for(int i = 0; i<sizeOfArray; i++){
        cin>>arr[i];
    }

    int toShift;
    cin>>toShift;
    
    int temp[toShift];

    for(int i = 0; i < toShift; i++){
        temp[i] = arr[i];
    }

    for(int i = toShift; i < sizeOfArray; i++){
        arr[i-toShift] = arr[i];
    }

    // for(int i = 1; i <= toShift; i++){
    //     arr[i + toShift] = temp[i-1];
    // }
    
    for(int i = 0; i <toShift; i++){
        arr[sizeOfArray - toShift + i] = temp[i];
    }

    for(int i = 0; i<sizeOfArray; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

// reversal algo

void leftRotate(int arr[], int sizeOfArray, int toShift){
    reverse(arr, 0, toShift -1);
    reverse(arr, toShift, sizeOfArray - 1);
    reverse(arr, 0, sizeOfArray -1);
}

void reverse(int arr[], int low, int high){
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}