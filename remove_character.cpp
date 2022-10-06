#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string word;
    char letter;
    cin>>word;
    cin>>letter;
    int places[word.length()];
    for( int i = 0; i<= word.length(); i++){
        if (word[i] == letter){
            places[i] = i;
        }
        else{
            places[i] = 0;
        }
    }
    for(int i = 0; i<= word.length(); i++){
        cout<<places[i]<<endl;
    }
    cout<<word;
}

// not done