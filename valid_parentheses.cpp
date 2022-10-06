#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> parentheses_stack;
    for(int i = 0; i< s.length(); i++){
        if((s[i] == '(')|| (s[i] == '{') || (s[i] == '[')){
            parentheses_stack.push(s[i]);
        }
        else{
            if( ! parentheses_stack.empty()){
                if(((s[i] == ')') && (parentheses_stack.top() == '(')) || ((s[i] == '}') && (parentheses_stack.top() == '{')) || ((s[i] == ']') && (parentheses_stack.top() == '['))){
                    parentheses_stack.pop();
                }
                else{
                    cout<<"false";
                    return 0;
                }
            }
            else {
                cout<<"false";
                return 0;
            }
        }
    }
    if (parentheses_stack.empty()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}

//done