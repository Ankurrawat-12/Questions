#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string x_string;
    cin>>x_string;

    for(int i = 0; i < x_string.size(); i++){
        int count = 0;
        for(int j = 0; j < x_string.size(); j++){
            if((x_string[i] == x_string[j]) && (i != j)){
                count ++;
                break;
            }
        }
        if(count == 0){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}

// done
// https://leetcode.com/problems/first-unique-character-in-a-string/