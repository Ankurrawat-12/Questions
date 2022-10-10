#include<iostream>

using namespace std;

int main(){
    string palindrom_number;
    cin>>palindrom_number;
    if(palindrom_number.size() == 1){
        cout<<0;
        return 0;
    }
    for(int i = 0; i < (palindrom_number.size()/2); i++){
        if(palindrom_number[i] != 'a'){
            palindrom_number[i] = 'a';
            cout<<palindrom_number;
            return 0;
        }
    }
    palindrom_number[palindrom_number.size() - 1] = 'b';
    cout<<palindrom_number;
    return 0;
}

// done
// https://leetcode.com/problems/break-a-palindrome/