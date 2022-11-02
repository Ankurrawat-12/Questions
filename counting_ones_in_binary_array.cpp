#include <iostream>

using namespace std;

int indexOfFirstOccurrence(int arr[], int toFind, int low, int high, int mid)
{
    // for sorted array
    if (low > high)
    {
        return -1;
    }
    else if (arr[mid] == toFind)
    {
        if (arr[mid] != arr[mid - 1] || mid == 0)
        {
            return mid;
        }
        else
        {
            return indexOfFirstOccurrence(arr, toFind, low, high, mid - 1);
        }
    }
    else if (arr[mid] > toFind)
    {
        return indexOfFirstOccurrence(arr, toFind, low, (mid - 1), (low + high) / 2);
    }
    else
    {
        return indexOfFirstOccurrence(arr, toFind, (mid + 1), high, (low + high) / 2);
    }
}

int countinfOnesInBinaryArray(int arr[], int sizeOfArray){
    // for sorted array
    int first = indexOfFirstOccurrence(arr, 1, 0, sizeOfArray - 1, (sizeOfArray - 1) / 2);
    if(first == -1){
        return 0;
    }
    else{
        return (sizeOfArray) - first;
    }
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
    int index = countinfOnesInBinaryArray(arr, sizeOfArray);
    cout << index;
}