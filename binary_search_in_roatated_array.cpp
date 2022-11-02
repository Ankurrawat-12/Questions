#include <iostream>
#include <cmath>

using namespace std;


int binarySearchRotated(int arr[], int sizeOfArray, int toFind)
{
    // for sorted array
    int low = 0;
    int high = sizeOfArray - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == toFind)
        {
            return mid;
        }
        if (arr[low] < arr[mid])
        {
            if(toFind >= arr[low] && toFind < arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else
        {
            if(toFind > arr[mid] && toFind <= arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    } 
    return -1;
}

int main()
{
    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }
    int toFind;
    cin >> toFind;

    cout<<binarySearchRotated(arr, sizeOfArray, toFind);
    return 0;
}