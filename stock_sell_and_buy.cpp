#include<iostream>

using namespace std;

int main(){
    int noOfDays;
    cin>>noOfDays;

    int prices[noOfDays];
    for (int i = 0; i < noOfDays; i++)
    {
        cin>>prices[i];
    }

    int profit = 0;
    for(int i = 1; i < noOfDays; i++){
        if(prices[i] > prices[i-1]){
            profit += (prices[i] - prices[i-1]);
        }
    }
    cout<<profit;
     
}