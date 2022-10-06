#include<iostream>

using namespace std;

void add_star(string&, string&, int);

int main(){
    string word,new_word;
    cin>>word;
    new_word = "";
    add_star(word, new_word, 0); 
    cout<<new_word;
    return 0;
}

void add_star(string& word, string& new_word, int i){
    // cout<<"new_function started";
    new_word = new_word + word[i];
    if(i == (word.length()-1)){
        // cout<<"yes";
        return;
    }
    if(word[i] == word[i+1]){
        // cout<<"added";
        new_word = new_word + "*";
    }
    // int m = i+1;
    // cout<<"new_function starting";
    add_star(word, new_word, i+1);
    return;
}

//done