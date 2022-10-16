#include<iostream>
#include<string>

using namespace std;

// bool palindrome(int,int,string&);
string palindrome(int,int,string&);

int main(){
    string input;
    cin>>input;

    // bool is_palindrome = palindrome(0, input.length() - 1, input);
    string is_palindrome = palindrome(0, input.length() - 1, input);
    cout<<is_palindrome;
}

// bool palindrome(int i, int n, string& input){
string palindrome(int i, int n, string& input){
    if(i >= n)
        return "true";
        // return true;
    if(input[i] == input[n]){
        return palindrome(i+1, n-1, input);
    }
    return "false";
    // return (input[i] == input[n])&& palindrome(i+1, n-1, input);
}