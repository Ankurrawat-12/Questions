#include<iostream>
#include<string>
using namespace std;

int main(){
    string date;
    cin>>date;
    string year = date;
    string month = date;
    string day = date;
    year = year.erase(4,9);
    month = month.erase(0, 5);
    month = month.erase(2, 4);
    day = day.erase(0,8);
    int day_of_the_year = 0;
    bool leap_year;

    if (stoi(year) % 400 == 0) {
        leap_year = true;
    }
    else if (stoi(year) % 100 == 0) {
        leap_year = false;
    }
    else if (stoi(year) % 4 == 0) {
        leap_year = true;
    }
    else {
        leap_year = false;
    }

    for(int  i = 1; i <= stoi(month); i++){
        int limit = 0;
        if(i == 2){
            if(leap_year){
                limit = 29;
            }
            else{
                limit = 28;
            }
        }
        else if ( i <= 7){
            if(i % 2 == 0){
                limit = 30;
            }
            else{
                limit = 31;
            }

        }
        else{
            if(i % 2 == 0){
                limit = 31;
            }
            else{
                limit = 30;
            }
        }
        for(int j = 1 ; j <= limit; j++){
            if((i == stoi(month)) && (j == stoi(day))){
                day_of_the_year += 1;
                cout<<day_of_the_year;
                return 0;
            }
            else{
                day_of_the_year += 1;
            }
        }
    }
    return 0;
}

// done
// https://leetcode.com/problems/day-of-the-year/