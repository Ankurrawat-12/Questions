#include <iostream>

using namespace std;

int LinearSearch(int *arr, int toSearch, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] == toSearch)
        {
            return i;
        }
    }
    return -1;
}

int *incersionInArray(int arr[], int toInsert, int index, int sizeOfArray)
{

    for (int i = sizeOfArray - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = toInsert;
    return arr;
}

int *deletionInArray(int arr[], int toDelete, int sizeOfArray)
{
    for (int i = LinearSearch(arr, toDelete, sizeOfArray); i < sizeOfArray; i++)
    {
        arr[i] = arr[i + 1];
    }
    return arr;
}
void function(int **arr)
{
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[((sizeof(arr) / sizeof(arr[0])) / 2) - i];
        arr[((sizeof(arr) / sizeof(arr[0])) / 2) - i] = temp;
    }
}

int binarySearch(int arr[], int sizeOfArray, int toFind)
{
    // for sorted array
    int low = 0;
    int high = sizeOfArray - 1;
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

int linearSearch(int arr[], int sizeOfArray, int toFind)
{
    // for non sorted array
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (toFind == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int recursiveBinarySearch(int arr[], int toFind, int low, int high, int mid)
{
    // for sorted array
    if (low > high)
    {
        return -1;
    }
    else if (arr[mid] == toFind)
    {
        return mid;
    }
    else if (arr[mid] > toFind)
    {
        return recursiveBinarySearch(arr, toFind, low, (mid - 1), (low + high) / 2);
    }
    else
    {
        return recursiveBinarySearch(arr, toFind, (mid + 1), high, (low + high) / 2);
    }
}

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
    if (first == -1)
    {
        return 0;
    }
    else
    {
        return indexOfLastOccurrence(arr, toFind, 0, sizeOfArray - 1, (sizeOfArray - 1) / 2) - first + 1;
    }
}

int countinfOnesInBinaryArray(int arr[], int sizeOfArray)
{
    // for sorted array
    int first = indexOfFirstOccurrence(arr, 1, 0, sizeOfArray - 1, (sizeOfArray - 1) / 2);
    if (first == -1)
    {
        return 0;
    }
    else
    {
        return (sizeOfArray - 1) - first;
    }
}

int main()
{
    int sizeOfArray;
    int operationToPerform;
    cin >> sizeOfArray;
    int *arr = new int[sizeOfArray + sizeOfArray / 2];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }
    // cout<<"\n1:- Linear Search\n2:- Insert in a Position\n3:- Deletion";
    cin >> operationToPerform;

    switch (operationToPerform)
    {
    case 1:
        int toSearch;
        cin >> toSearch;
        cout << LinearSearch(arr, toSearch, sizeOfArray);
        break;
    case 2:
        int toInsert;
        cin >> toInsert;
        int index;
        cin >> index;
        arr = incersionInArray(arr, toInsert, index, sizeOfArray);
        for (int i = 0; i <= sizeOfArray; i++)
        {
            cout << arr[i] << " ";
        }
        break;
    case 3:
        int toDelete;
        cin >> toDelete;
        arr = deletionInArray(arr, toDelete, sizeOfArray);
        for (int i = 0; i < sizeOfArray - 1; i++)
        {
            cout << arr[i] << " ";
        }
        break;
    case 4:
        for (int i = 0; i < sizeOfArray - 1; i++)
        {
            cout << arr[i] << " ";
        }
        function(&arr);
        for (int i = 0; i < sizeOfArray - 1; i++)
        {
            cout << arr[i] << " ";
        }
    case 5:
        int toFind;
        cin >> toFind;
        int index = binarySearch(arr, sizeOfArray, toFind);
        // int index = linearSearch(arr, sizeOfArray, toFind);
        // int index = recursiveBinarySearch(arr, toFind, 0, sizeOfArray-1, (sizeOfArray-1)/2);\
        cout << index;
        break;
    case 6:
        int toFind;
        cin >> toFind;
        int index = indexOfFirstOccurrence(arr, toFind, 0, sizeOfArray - 1, (sizeOfArray - 1) / 2);
        cout << index;
        break;
    case 7:
        int toFind;
        cin >> toFind;
        int index = indexOfLastOccurrence(arr, toFind, 0, sizeOfArray - 1, (sizeOfArray - 1) / 2);
        cout << index;
        break;
    case 8:
        int toFind;
        cin >> toFind;
        int index = countOccurrences(arr, sizeOfArray, toFind);
        // int index = countOccurrencesUsingFunction(arr, sizeOfArray, toFind);
        cout << index;
        break;
    case 9:
        int toFind;
        cin >> toFind;
        int index = countinfOnesInBinaryArray(arr, sizeOfArray);
        cout << index;
        break;
    default:
        break;
    }
}
