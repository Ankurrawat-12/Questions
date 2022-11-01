#include<iostream>

using namespace std;

int main(){
    int sizeOfNBonachi;
    int n;
    cin>>n;
    cin>>sizeOfNBonachi;
    int arr[sizeOfNBonachi];

    for(int i = 0; i < n-1; i++){
        arr[i] = 0;
    }
    arr[n-1] = 1;
    int currentSum = 1;
    for(int i = n; i < sizeOfNBonachi; i++){
        arr[i] = currentSum;
        currentSum += arr[i];
        currentSum -= arr[i-n];
    }
    for (int i = 0; i < sizeOfNBonachi; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}