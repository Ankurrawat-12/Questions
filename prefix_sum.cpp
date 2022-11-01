#include <iostream>

using namespace std;

// given a fixed array and multiple quries of following types on the array, how to efficienty perform these querry?
void questionOne(int arr[], int sizeOfArray, int prefixSum[])
{

    int cols;
    cin >> cols;
    int highlows[cols][2];

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> highlows[i][j];
        }
    }
    for (int i = 0; i < cols; i++)
    {
        int sum = 0;
        if (highlows[i][0] == 0)
        {
            sum = prefixSum[highlows[i][1]];
        }
        else
        {
            sum = prefixSum[highlows[i][1]] - prefixSum[highlows[i][0] - 1];
        }
        cout << sum << endl;
    }
}

// given an array of integer find if it has an equilibrium point;
void questionTwo(int arr[], int sizeOfArray, int prefixSum[])
{

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (i == 0 || i == sizeOfArray - 1)
        {
            if (i == 0)
            {
                if ((prefixSum[sizeOfArray - 1] - prefixSum[i]) == 0)
                {
                    cout << "Yes";
                    return;
                }
            }
            else{
                if (prefixSum[sizeOfArray - 2] == 0)
                {
                    cout << "Yes";
                    return;
                }
            }
        }
        else if (prefixSum[i-1] == (prefixSum[sizeOfArray - 1] - prefixSum[i]))
        {
            cout<<"Yes";
            return;
        }
        
    }
    cout<<"No";
    return;
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
    int prefixSum[sizeOfArray];
    prefixSum[0] = arr[0];
    for (int i = 1; i < sizeOfArray; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        questionOne(arr, sizeOfArray, prefixSum);
        break;
    case 2:
        questionTwo(arr, sizeOfArray, prefixSum);
        break;
    default:
        break;
    }
    return 0;
}
