#include<iostream>

using namespace std;

int main(){
    int number;
    cin>>number;
    int set_bits = 0;
    // while(number > 0){
    //     if((1 & number) == 1){
    //         set_bits +=1;
    //     }
    //     number = number >> 1;
    // }
    // cout<<set_bits;
    // return 0;

    // Brain Kerningam's Algorithm
    while(number > 0){
        number = (number & (number -1));
        set_bits +=1;
        number = number >> 1;
    }
    cout<<set_bits;
    return 0;
}
