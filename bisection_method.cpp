// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

float func(float x){
    return (x*x*x) - x - 1;
}

int main() {
    float x1, x2, x0, error;
    cout<<"Enter X1 :- ";
    cin>>x1;
    cout<<"Enter X2 :- ";
    cin>>x2;
    cout<<"Enter the error :- ";
    cin>>error;
    
    if(func(x1) * func(x2) > 0){
        cout<<"Bisection method will not work";
        return -1;
    }
    x0 = (x1 + x2)/2;
    while(abs((x1-x2)/x0) >= error){
        if(func(x0) * func(x1) == 0){
            break;
        }
        else if(func(x0) * func(x1) < 0){
            x2 = x0;
        }
        else{
            x1 = x0;
        }
        x0 = (x1 + x2)/2;
    }
    cout<<"Answer is :-"<<x0;

    return 0;
}