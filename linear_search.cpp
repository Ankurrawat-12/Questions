#include<bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> arr, int key){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int binarySearch(vector<int> arr, int key){
    int right = arr.size() -1;
    int left = 0;
    int mid;
    while(left <= right){
        mid = (left + right)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key > arr[mid]){
            left = mid + 1;
        }
        else{
            right = mid -1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr;
    int size;
    cout<<"Enter the size of the array: -";
    cin>>size;
    for(int i = 0; i < size; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"Enter the element you want to find: - ";
    int key;
    cin>>key;
    cout<<"Which Search Do you want to use"<<endl<<"Enter 1 for Linear Enter 2 for Binary: - ";
    int search;
    cin>>search;

    if(search == 1){
        cout<<key<<" at "<<linearSearch(arr, key)<<" index";
    }
    else if(search == 2){
        cout<<key<<" at "<<binarySearch(arr, key)<<" index";
    }
    else{
        cout<<"Please enter either 1 or 2";
    }
    return 0;
}