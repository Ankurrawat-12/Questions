#include<iostream>

using namespace std;

int findingMajority(int arr[], int sizeOfArray);

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin>>arr[i];
    }
    int majorElementIndex = findingMajority(arr, sizeOfArray);
    cout<<majorElementIndex;
    return 0;
}

int findingMajority(int arr[], int sizeOfArray){
    for (int i = 0; i < sizeOfArray; i++)
    {
        int count = 1;
        for (int j = i+1; j < sizeOfArray; j++)
        {
            if(arr[i] == arr[j]){ 
                count++;
            }
            if(count>sizeOfArray/2){
                return i;
            }
        }
        
    }
    return -1;
    
}