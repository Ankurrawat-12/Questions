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
    int maxEnding = arr[0];
    int result = arr[0];

    for (int i = 1; i < sizeOfArray; i++)
    {
        maxEnding = max((maxEnding+ arr[i]), arr[i]);
        result = max(maxEnding, result);
    }
    cout<<result;
    return 0;
}

// done