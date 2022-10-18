#include<iostream>
#include<string>

using namespace std;

void subsets(string, string, int);

int main(){
    string input;
    cin>>input;
    subsets(input, "", 0);
}

void subsets(string mainString,string subset = "", int start = 0){
    if(start == mainString.length()){
        cout<<subset<<endl;
        return;
    }
    subsets(mainString, subset, start+1);
    subsets(mainString, subset + mainString[start], start+1);
}