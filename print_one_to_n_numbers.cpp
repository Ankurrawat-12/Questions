#include<iostream>

using namespace std;

void print_numbers(int n);

int main(){
    int number;
    cin>>number;

    print_numbers(number);
    return 0;
}

void print_numbers(int number){
    if(number == 0){
        return;
    }
    print_numbers(number - 1);
    cout<<number<<" ";
}