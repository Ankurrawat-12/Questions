#include<iostream>

using namespace std;

void binary(int);

int main(){
    int decimal;
    cin>>decimal;

    binary(decimal);
}

void binary(int decimal){
    if(decimal == 0){
        return;
    }
    binary(decimal/2);
    cout<<decimal%2;
}

// done