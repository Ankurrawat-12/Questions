#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string equation;
    cin>>equation;
    stack<char> equation_stack;
    for(int i = 0; i< equation.length(); i++){
        if(equation[i] != ')'){
            equation_stack.push(equation[i]);
        }
        else{
            int count = 0;
            while (equation_stack.top() != '(')
            {
                char popped = equation_stack.top();
                equation_stack.pop();
                if((popped == '+') ||(popped == '-') ||(popped == '*') ||(popped == '/')){
                    count += 1;
                }
            }
            equation_stack.pop();
            if(count == 0){
                cout<<"redundant braces present";
                return 0;
            }
            
        }
    }
    cout<<"redundant braces not present";
    return 0;
}

// done
// https://www.interviewbit.com/problems/redundant-braces/