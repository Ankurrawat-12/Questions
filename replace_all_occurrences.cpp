#include<iostream>

using namespace std;

int main()
{
    int n;
    string list_of_sentences[n];
    cin>>n;
    for(int i = 0; i <= n; i++){
        string sentence;
        cin>>sentence;
        list_of_sentences[i] = sentence;
    }
    
    for(int i = 0; i <= n; i++){
        cout<<list_of_sentences[i]<<endl;
    }
}
// not completed in C++