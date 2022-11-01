#include<iostream>

using namespace std;

int LinearSearch(int *arr, int toSearch, int sizeOfArray){
    for(int i = 0; i < sizeOfArray; i++){
        if(arr[i] == toSearch){
            return i;
        }
    }
    return -1;
}

int *incersionInArray(int arr[], int toInsert, int index, int sizeOfArray){

    for(int i = sizeOfArray-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = toInsert;
    return arr;
}

int *deletionInArray(int arr[], int toDelete, int sizeOfArray){
     for(int i = LinearSearch(arr, toDelete, sizeOfArray); i < sizeOfArray; i++){
        arr[i] = arr[i+1];
    }
    return arr;
}
void function(int **arr){
    for(int i = 0; i< (sizeof(arr)/sizeof(arr[0]))/2; i++){
        int temp = arr[i];
        arr[i] = arr[((sizeof(arr)/sizeof(arr[0]))/2) -i];
        arr[((sizeof(arr)/sizeof(arr[0]))/2) -i] = temp;
    }
}

int main(){
    int sizeOfArray;
    int operationToPerform;
    cin>>sizeOfArray;
    int *arr = new int[sizeOfArray + sizeOfArray/2];
    for(int i = 0; i < sizeOfArray; i++){
        cin>>arr[i];
    }
    // cout<<"\n1:- Linear Search\n2:- Insert in a Position\n3:- Deletion";
    cin>>operationToPerform;

    switch (operationToPerform)
    {
    case 1:
        int toSearch;
        cin>>toSearch;
        cout<<LinearSearch(arr, toSearch, sizeOfArray);
        break;
    case 2:
        int toInsert;
        cin>>toInsert;
        int index;
        cin>>index;
        arr = incersionInArray(arr, toInsert, index, sizeOfArray);
        for(int i = 0; i <= sizeOfArray; i++){
            cout<<arr[i]<<" ";
        }
        break;
    case 3:
        int toDelete;
        cin>>toDelete;
        arr = deletionInArray(arr, toDelete, sizeOfArray);
        for(int i = 0; i < sizeOfArray - 1; i++){
            cout<<arr[i]<<" ";
        }
        break;
    case 4:
        for(int i = 0; i < sizeOfArray - 1; i++){
            cout<<arr[i]<<" ";
        }
        function(&arr);
        for(int i = 0; i < sizeOfArray - 1; i++){
            cout<<arr[i]<<" ";
        }
    default:
        break;
    }
}