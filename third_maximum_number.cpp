#include<iostream>

using namespace std;

int main(){
    int length;
    cin>>length;
    int numbers[length];
    for(int i = 0; i<length; i++){
        cin>>numbers[i];
    }
    int first_highest = 0, second_highest = 0, third_highest = 0;
    for(int i = 0; i<length; i++){
        if(numbers[i] > first_highest){
            third_highest = second_highest;
            second_highest = first_highest;
            first_highest = numbers[i];
        }
        if((numbers[i] > second_highest) && (numbers[i] < first_highest)){
            third_highest = second_highest;
            second_highest = numbers[i];
        }
        if((numbers[i] > third_highest) && (numbers[i] < second_highest)){
            third_highest = numbers[i];
        }
    }
    if(third_highest == 0){
        cout<<first_highest;
    }
    else{
        cout<<third_highest;
    }
    return 0;
}

// done
// https://leetcode.com/problems/third-maximum-number/