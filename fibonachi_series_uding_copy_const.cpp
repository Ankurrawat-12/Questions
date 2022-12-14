#include<bits/stdc++.h>

using namespace std;

class Fibonachi{
    public:
        int number;
        Fibonachi(){};
        Fibonachi(int);
        Fibonachi(Fibonachi, Fibonachi);
};

Fibonachi::Fibonachi(int number){
    this->number = number;
}

Fibonachi::Fibonachi(Fibonachi PrevNo, Fibonachi PrevPrevNo){
    this->number = PrevNo.number + PrevPrevNo.number;
}

int main(){
    Fibonachi no1(1), no2(1);
    vector<Fibonachi> fibonachiSeries;
    fibonachiSeries.push_back(no1);
    fibonachiSeries.push_back(no2);
    int seriesSize;
    // cout<<"Enter the size of the fibonachi series: - ";
    cin>>seriesSize;
    for(int i = 0; i < seriesSize-2; i++){
        Fibonachi no;
        no=Fibonachi(fibonachiSeries[i], fibonachiSeries[i+1]);
        fibonachiSeries.push_back(no);
    }
   
    for(auto i: fibonachiSeries){
        cout<<i.number<<" ";
    }
}
