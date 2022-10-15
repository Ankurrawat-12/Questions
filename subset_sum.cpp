#include<iostream>

using namespace std;

int subset(int[], int, int);

int main(){
    int length;
    cin>>length;

    int sum;
    cin>>sum;

    int numbers[length];
    for(int i = 0; i < length; i++){
        cin>>numbers[i];
    }
    cout<<subset(numbers, length, sum);
    return 0;
}

int subset(int set[], int length, int sum){
    if(length == 0){
        return (sum == 0)? 1 : 0;
    }
    return subset(set, length - 1, sum) + subset(set, length - 1, sum - set[length - 1]);
}