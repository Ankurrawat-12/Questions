#include<iostream>

using namespace std;

int windowSliding(int [], int , int);

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin>>arr[i];
    }

    int xToAdd;
    cin>>xToAdd;

    int maxSum = windowSliding(arr, sizeOfArray, xToAdd);
    cout<<maxSum;
    return 0;
}

int windowSliding(int arr[], int sizeOfArray, int xToAdd){
    int maxSum = 0;
    int currentSum = 0;
    for (int i = 0; i < xToAdd; i++)
    {
        currentSum += arr[i];
    }
    for(int i = xToAdd; i < sizeOfArray; i++)
    {
        currentSum += (arr[i] - arr[i- xToAdd]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}