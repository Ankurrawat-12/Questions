#include<bits/stdc++.h>

using namespace std;

float f(float x){
    return(1/(1+pow(x, 2)));
}

float simsonsTheeEight(float a, float b, float n){
    float h = (b-a)/n;
   
    float s = f(a) + f(b);
    float sr = 0;
    float st = 0;
   
    for(int i = 1; i < n; i++){
        if(i%3 !=0){
            sr += f(a+i*h);
        }
        else{
            st += f(a+i*h);
        }
    }
    return ((3*h/8)*(s + (2*st) + (3*sr)));
}



int main(){
    float a, b, n;
    cout<<"Enter the upper limit of the intigratiion: - ";
    cin>>a;
    cout<<"Enter the lower limit of the intigratiion: - ";
    cin>>b;
    cout<<"Enter the no of steps for the intigratiion: - ";
    cin>>n;

    if(int(n) % 3 == 0)
    {
        cout<<"Required value of intigration is :-" + to_string(simsonsTheeEight(a, b, n));
    }
    else{
        cout<<"No of steps should be in multiples of 3";
    }
}