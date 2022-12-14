#include<bits/stdc++.h>

using namespace std;

double raisePower(double m, int n = 2){
    return pow(m, n);
}

int main() {
    double m;
    int n;
    cout<<"Enter the value of m: - "<<endl;
    cin>>m;
    cout<<"Enter the value of n: - "<<endl;
    cin>>n;
    cout<<"m raised to the power n: - "<<raisePower(m, n)<<endl;
    cout<<"Default: - "<<raisePower(m)<<endl;

    return 0;
}