#include<iostream>

using namespace std;

int main(){
    int number;
    int reversed_number = 0;
    cin>>number;
    while (number != 0)
    {
        int temp = number % 10;
        number /= 10;
        reversed_number = (reversed_number*10) + temp;
    }
    cout<<reversed_number;
    
}