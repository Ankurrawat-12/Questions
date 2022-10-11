#include<iostream>

using namespace std;

int main(){
    int number;
    cin>>number;
    int k;
    cin>>k;
    if((number & (1 << (k -1))) != 0){
        cout<<"yes";
        return 0;
    }
    else{
        cout<<"no";
    }
    return 0;
}