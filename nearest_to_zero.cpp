#include<iostream>

using namespace std;

int nearest_to_zero(int[], int);

int main(){
    int n;
    cin>>n;
    int smallest_number;
    int numbers[n];
    for(int i = 0; i<n ; i++){
        cin>>numbers[i];
    }
    smallest_number = nearest_to_zero(numbers, n);
    cout<<smallest_number;
    return 0;
}

int nearest_to_zero(int numbers[], int n){
    int smallest_number = abs(numbers[0]);
    
    for(int i = 1; i<n ; i++){
        if(abs(smallest_number) > abs(numbers[i])){
            smallest_number = numbers[i];
        }
    }
    return smallest_number;
}

// done
// https://leetcode.com/problems/find-closest-number-to-zero/