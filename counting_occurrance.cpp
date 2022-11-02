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

int indexOfLastOccurrence(int arr[], int toFind, int low, int high, int mid)
{
    // for sorted array
    if (low > high)
    {
        return -1;
    }
    else if (arr[mid] == toFind)
    {
        int size = sizeof(*arr) / sizeof(arr[0]);
        if (arr[mid] != arr[mid + 1] || mid == size)
        {
            return mid;
        }
        else
        {
            return indexOfLastOccurrence(arr, toFind, low, high, mid + 1);
        }
    }
    else if (arr[mid] > toFind)
    {
        return indexOfLastOccurrence(arr, toFind, low, (mid - 1), (low + high) / 2);
    }
    else
    {
        return indexOfLastOccurrence(arr, toFind, (mid + 1), high, (low + high) / 2);
    }
}

int countOccurrences(int arr[], int sizeOfArray, int toFind)
{
    // for sorted array
    int low = 0;
    int high = sizeOfArray - 1;
    int mid = (low + high) / 2;
    int count = 0;
    while (low <= high)
    {
        if (arr[mid] == toFind)
        {
            if (((arr[mid] != arr[mid - 1]) || mid == 0) || count != 0)
            {
                if (arr[mid] != arr[mid + 1])
                {
                    count++;
                    return count;
                }
                else
                {
                    mid++;
                    count++;
                }
            }
            else
                mid--;
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
    return 0;
}

int countOccurrencesUsingFunction(int arr[], int sizeOfArray, int toFind)
{
    // for sorted array
    int first = indexOfFirstOccurrence(arr, toFind, 0, sizeOfArray - 1, (sizeOfArray - 1) / 2);
    if(first == -1){
        return 0;
    }
    else{
        return indexOfLastOccurrence(arr, toFind, 0, sizeOfArray - 1, (sizeOfArray - 1) / 2) - first + 1;
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
    int toFind;
    cin >> toFind;

    // int index = countOccurrences(arr, sizeOfArray, toFind);
    int index = countOccurrencesUsingFunction(arr, sizeOfArray, toFind);
    cout << index;
    return 0;
}