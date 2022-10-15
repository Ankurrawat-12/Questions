#include<iostream>

using namespace std;

int main(){
    int length;
    cin>>length;

    int numbers[length];

    for(int i = 0; i < length; i++){
        cin>>numbers[i];
    }

    int result1 = 0;
    int result2 = 0;

    for(int i = 0; i <= length; i++){
        if(i != length){
            result1 = result1 ^ numbers[i];
        }
        result2 = result2 ^ (i+1);
    }
    
    int result = result1 ^ result2;
    cout<<result;
    return 0;
}