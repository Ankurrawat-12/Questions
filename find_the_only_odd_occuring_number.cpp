#include<iostream>

using namespace std;

int main(){
    int length;
    cin>>length;

    int numbers[length];
    for(int i = 0; i < length; i++){
        cin>>numbers[i];
    }

    int result = 0;
    for(int i = 0; i <length; i++){
        result = result ^ numbers[i];
    }
    cout<<result;
    return 0;
}