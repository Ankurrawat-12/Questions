#include<bits/stdc++.h>
using namespace std;

class factorial{
    int num;
    int fact=1;
    public:
    factorial(int num){
        this->num = num;
        for(int i=1;i<=num;i++){
            fact *= (i); 
        }
    }

    void display(){
        cout<<"the factorial of "<<num<<" is "<<fact<<endl;
    }

};

int main(){
    int n;
    // cout<<"enter a number for a factorial"<<endl;
    cin>>n;
    factorial f1(n);
    f1.display();
    return 0;
}
