#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin>>arr[i];
    }

    int givenSum;
    cin>>givenSum;
    int currentSum = arr[0];
    int count = 0;

    for (int i = 1; i < sizeOfArray; i++)
    {
        if(givenSum > currentSum){
            currentSum += arr[i];
        }
        while((givenSum < currentSum) && (count < i-1))
        {
            currentSum -= arr[count];
            count++;
        }
        if(givenSum == currentSum){
            cout<<"Yes";
            return 0;
        }
        
    }
    cout<<"No";
    return 0;
    
}