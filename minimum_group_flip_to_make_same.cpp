#include <iostream>

using namespace std;

void findTheFlips(int *arr, int sizeOfArray);

int main()
{
    int sizeOfArray;
    cin >> sizeOfArray;

    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }

    findTheFlips(arr, sizeOfArray);
    return 0;
}

void findTheFlips(int *arr, int sizeOfArray)
{
    int majorityIndex = 0;
    int count = 1;
    for (int i = 1; i < sizeOfArray; i++)
    {
        if (arr[i] == arr[majorityIndex])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            count = 1;
            majorityIndex = i;
        }
    }
    int toFlip = !arr[majorityIndex];
    count = 0;
    int min = 0;
    int max = 0;

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] == toFlip)
        {
            if (count == 0)
            {
                min = i;
            }
            count++;
        }
        if (((arr[i - 1] == toFlip) && arr[i] != toFlip) || ((i == sizeOfArray - 1) && arr[i] == toFlip))
        {
            if (i == sizeOfArray - 1 && arr[i] == toFlip)
            {
                max = i;
            }
            else
            {
                max = i - 1;
            }
            count = 0;
            cout << "From " << min << " to " << max << endl;
        }
    }
}