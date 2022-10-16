#include<iostream>

using namespace std;

int sumOfDigits(int);

int main(){
    int number;
    cin>>number;

    int sum = sumOfDigits(number);
    cout<<sum;
    return 0;
}

int sumOfDigits(int number){
    if (number <= 0)
    {
        return 0;
    }
    return number%10 + sumOfDigits(number/10);
}