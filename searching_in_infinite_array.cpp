#include<iostream>

using namespace std;

int binarySearch(int arr[], int toFind, int low, int high)
{
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == toFind)
        {
            return mid;
        }
        else if (arr[mid] > toFind)
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else
        {
            low = mid + 1;
            mid = (low + high) / 2;
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
    int toFind;
    cin >> toFind;
    if(arr[0] == toFind){
        cout<<0;
        return 0;
    }
    int i = 1;
    while(arr[i] < toFind){
        i *= 2;
    }
    if(arr[i] == toFind){
        cout<<i;
        return 0;
    }
    cout<<binarySearch(arr, toFind, i/2-1, i-1);
}