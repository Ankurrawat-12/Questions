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

    int result = 1;
    int current = 1;
    for (int i = 1; i < sizeOfArray; i++)
    {
        if(((arr[i]%2 == 0) && (arr[i-1] % 2 != 0 ))|| (arr[i]%2 != 0) && (arr[i-1]%2 == 0)){
            current++;
            result = max(current, result);
        }
        else{
            current = 1;
        }
    }
    cout<<result;
    return 0;
}