// #include<iostream>

// using namespace std;


// void function(int *arr){
//     for(int i = 0; i< (sizeof(arr)/sizeof(arr[0]))/2; i++){
//         int temp = *arr[i];
//         *arr[i] = *arr[((sizeof(arr)/sizeof(arr[0]))/2) -i];
//         *arr[((sizeof(arr)/sizeof(arr[0]))/2) -i] = temp;
//     }
// }

// void function(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     cout<<*a<<" "<<*b<<endl;

// }

// int main(){
//     int arr[] = {10, 20, 30 , 40, 50};
//     for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++){
//         cout<<arr[i]<<" ";
//     }
//     function(arr);
//     cout<<endl;
//     for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int a = 5;
//     int b = 6;
//     cout<<a<<" "<<b<<endl;
//     function(&a , &b);
//     cout<<a<<" "<<b;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// void swap(int[],int[]);

int main() {
    
    // int array1[5] = {10,20,30,40,50};
    // int array2[5] = {60,70,80,90,100};

    // cout<<"The original arrays are as shown below: " << endl;
    // cout << " Array 1 is: ";
    // for (int i = 0; i < 5; ++i) {
    //     cout << array1[i] << "  ";
    // }
    // cout << "\n Array 2 is: ";
    // for (int i = 0; i < 5; ++i) {
    //     cout << array2[i] << "  ";
    // }

    // swap(array1, array2);

    // cout<<"The original arrays are as shown below: " << endl;
    // cout << " Array 1 is: ";
    // for (int i = 0; i < 5; ++i) {
    //     cout << array1[i] << "  ";
    // }
    // cout << "\n Array 2 is: ";
    // for (int i = 0; i < 5; ++i) {
    //     cout << array2[i] << "  ";
    // }
    string equation;
    cin>>equation;
    cout<<equation.eval();
    
    return 0;
    
}

// void swap(int array1[], int array2[])
// {
    
//     int temp,i;
//     for(i=0; i<5; ++i)
//     {
//         temp = array1[i];
//         array1[i] = array2[i];
//         array2[i] = temp;
//     }
// } 