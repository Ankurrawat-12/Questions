#include<iostream>

using namespace std;

int NormalmaximumSumOfArray(int arr[], int sizeOfArray);
int CircularMaximumSumOfArray(int arr[], int sizeOfArray);

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        cin>>arr[i];
    }
    int maximumCircularSum = CircularMaximumSumOfArray(arr, sizeOfArray);
    cout<<maximumCircularSum;
    return 0;    
}


int NormalmaximumSumOfArray(int arr[], int sizeOfArray){
    int maxEnding = arr[0];
    int result = arr[0];

    for (int i = 1; i < sizeOfArray; i++)
    {
        maxEnding = max((maxEnding+ arr[i]), arr[i]);
        result = max(maxEnding, result);
    }
    return result;
}

int CircularMaximumSumOfArray(int arr[], int sizeOfArray){
    int maximumNormalSum = NormalmaximumSumOfArray(arr, sizeOfArray);
    if(maximumNormalSum < 0){
        return maximumNormalSum;
    }
    int arraySum = 0;
    for(int i = 0; i < sizeOfArray; i++){
        arraySum += arr[i];
        arr[i] = -arr[i];
    }
    int maximumCircularSum = arraySum + NormalmaximumSumOfArray(arr, sizeOfArray);
    return max(maximumCircularSum, maximumNormalSum);
}