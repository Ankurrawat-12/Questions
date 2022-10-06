#include<iostream>
// #include <vector>

// std::vector< int > arr;

// arr.push_back(1);
// arr.push_back(2);
// arr.push_back(3);
using namespace std;

int* find_two_numbers(int [], int, int);

int main(){
    int n;
    cin>>n;
    // int numbers = new int[n];
    int numbers[n];

    // vector< int> numbers4
    // for(int i = 0; i<n; i++){
    //     cin>>numbers[i].push_back();
    // }

    for(int i = 0; i<n; i++){
        cin>>numbers[i];
    }
    int target;
    cin>>target;

    int *final_numbers = find_two_numbers(numbers, n, target);
    for (int i = 0; i<2; i++){
        cout<<final_numbers[i]<<" ";
    }
    return 0;
}

int* find_two_numbers(int numbers[], int n, int target){
    int *final_numbers = new int[2];
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j < n; j++ ){
            if(numbers[i] + numbers[j] == target){
                final_numbers[0] = i;
                final_numbers[1] = j;
                return final_numbers;
            }
        } 
    }
    return 0;
}

// Done now just have to do this dynamically