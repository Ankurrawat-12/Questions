#include <bits/stdc++.h>

using namespace std;

class Number1{
    public:
        float no;
        Number1(){};
        Number1(float);
};

Number1::Number1(float no){
    this->no = no;
}

class Number2{
    public:
        float no;
        Number2(){};
        Number2(float);
        void comp(Number1);
        friend class Number1;
};

Number2::Number2(float no){
    this->no = no;
}

void Number2::comp(Number1 num1){
    if(this->no > num1.no){
        cout<<this->no<<" is bigger then "<<num1.no<<endl;
    }
    else if(this->no < num1.no){
        cout<<num1.no<<" is bigger then "<<this->no<<endl;
    }
    else{
        cout<<this->no<<" is equal to "<<num1.no<<endl;
    }
}


int main() {
    Number1 n1;
    Number2 n2;
    float num1, num2;
    cin>>num1>>num2;
    n1 = Number1(num1);
    n2 = Number2(num2);
    n2.comp(n1);
}