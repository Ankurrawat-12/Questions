#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for(int i = 0; i< sizeOfArray; i++){
        cin>>arr[i];
    }

    int low = 0, high = sizeOfArray -1;
    while(low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for(int i = 0; i<sizeOfArray; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
