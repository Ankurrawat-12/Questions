#include <bits/stdc++.h>

using namespace std;

float func(float x){
    return (x*x*x) + x - 1;
}

int main() {
    float x1, x2, x3, error;
    cout<<"Enter X1 :- ";
    cin>>x1;
    cout<<"Enter X2 :- ";
    cin>>x2;
    cout<<"Enter the error :- ";
    cin>>error;
    if (func(x1) * func(x2) >= 0) {
        cout<<"Can't Find roots in the given interval";
        return 0;
    }
    int iterations = 0;
    x3 = (func(x2)*x1 - func(x1)*x2)/(func(x2) - func(x1));
    while(abs((x2-x1)/x3) > error){
        ++iterations;
        x1 = x2;
        x2 = x3;
        x3 = (func(x2)*x1 - func(x1)*x2)/(func(x2) - func(x1));
    }
    cout<<"Answer is :- "<<x3<<endl;
    cout<<"No Of Iterations Required :- "<<iterations;

    return 0;
}