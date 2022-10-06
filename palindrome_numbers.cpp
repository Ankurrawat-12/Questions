#include<iostream>
#include<string>

using namespace std;

int main(){
    string numbers;
    cin>>numbers;
    for(int i = 0; i < (numbers.length()/2); i++){
        if(numbers[i] != numbers[numbers.length() - (i + 1)]){
            cout<<"Not a Palindrome Number";
            return 0;
        }
    }
    cout<<"Palindrome Number";
    return 0;
}

// Done