#include<iostream>

using namespace std;

int findPeakElement(int arr[], int sizeOfArray)
{
    int high = sizeOfArray - 1;
    int low = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if((mid == 0 || arr[mid] >= arr[mid-1]) && (mid == sizeOfArray-1 || arr[mid] >= arr[mid+1])){
            return arr[mid];
        }
        if(mid > 0 && arr[mid-1] >= arr[mid]){
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }
    cout<<findPeakElement(arr, sizeOfArray);
    
    return 0;
}
