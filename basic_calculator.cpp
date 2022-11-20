#include <bits/stdc++.h>

using namespace std;

#define I(x) ((int)(x))

int calculate(string s)
{
    int answer;
    stack<char> equation;
    string newS = "(" + s + ")";

    for (int i = 0; i < newS.size(); i++)
    {
        if (newS[i] == ')')
        {
            while (equation.top() != '(')
            {
                int first;
                int second;
                switch (equation.top())
                {
                case '+':
                    equation.pop();
                    first = equation.top();
                    equation.push(first + second);
                    break;
                case '-':
                    equation.pop();
                    first = equation.top();
                    equation.push(first - second);
                    break;
                default:
                    second = I(equation.top());
                    equation.pop();
                    break;
                }
            }
        }
        else if(newS[i] != ' ')
        {
            equation.push(newS[i]);
        }
    }
    return equation.top();
}


int main(){
    string s;
    getline(cin, s);
    cout<<calculate(s);
    return 0;
}