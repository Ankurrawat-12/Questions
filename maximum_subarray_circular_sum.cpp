#include<iostream>

using namespace std;

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;

    int arra[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        cin>>arra[i];
    }
    // int arr[sizeOfArray*2] = arra[];
    int arr[sizeOfArray*2];

    for(int i = 0; i < sizeOfArray*2; i++){
        if(i < sizeOfArray){
            arr[i] = arra[i];
        }
        else{
            arr[i] = arra[i - sizeOfArray];
        }
    }

    int maxEnding = arr[0];
    int result = arr[0];

    for (int i = 1; i < sizeOfArray*2; i++)
    {
        maxEnding = max((maxEnding+ arr[i]), arr[i]);
        result = max(maxEnding, result);
    }
    cout<<result;
    return 0;
}

// done
