#include<bits/stdc++.h>

using namespace std;

string removeDuplicates(string s) {
        stack<char> stackOfChar;
        for(int i = 0 ; i < s.size(); i++){
            if(stackOfChar.empty()){
                stackOfChar.push(s[i]);
            }
            else{
                if(stackOfChar.top() == s[i]){
                    stackOfChar.pop();
                }
                else{
                    stackOfChar.push(s[i]);
                }
            }
        }
        
        stack<char> answer;
        int stack_size = stackOfChar.size();
        for(int i = 0; i < stack_size; i++){
            answer.push(stackOfChar.top());
            stackOfChar.pop();
        }
        
        string ans = "";
        stack_size = answer.size();
        for(int i = 0; i < stack_size ; i++){
            ans += answer.top();
            answer.pop();
        }
        return ans;
}

int main(){
    string question;
    cin>>question;

    string ans = removeDuplicates(question);
    cout<<ans;
    return 0;
}