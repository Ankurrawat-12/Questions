#include<iostream>

using namespace std;

int main(){
    int length;
    cin>>length;

    int numbers[length];
    for(int i = 0; i < length; i++){
        cin>>numbers[i];
    }

    int x_or = 0;
    for(int i = 0; i<length; i++){
        x_or ^= numbers[i];
    }

    int rightmost_bit = (x_or & (~(x_or -1)));

    int result1 = 0;
    int result2 = 0;

    for(int i = 0; i < length; i++){
        if((numbers[i] & rightmost_bit) != 0){
            result1 ^= numbers[i];
        }
        else{
            result2 ^= numbers[i];
        }
    }
    cout<<result1<<endl<<result2;
    return 0;
}