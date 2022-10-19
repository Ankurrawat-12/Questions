#include<iostream>

using namespace std;

int josephus(int, int);

int main(){
    int noOfPeople;
    cin>>noOfPeople;
    int killingIndex;
    cin>>killingIndex;
    int lastRemaining = josephus(noOfPeople, killingIndex);
    cout<<lastRemaining;
    return 0;
}

int josephus(int noOfPeople, int killingIndex){
    if(noOfPeople == 1){
        return 0;
    }
    else{
        return (josephus(noOfPeople - 1, killingIndex) + killingIndex) % noOfPeople;
    }
}