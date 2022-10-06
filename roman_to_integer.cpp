#include<iostream>
#include<string>

using namespace std;

//     Symbol       Value
//      I             1
//      V             5
//      X             10
//      L             50
//      C             100
//      D             500
//      M             1000

//      I can be placed before V (5) and X (10) to make 4 and 9. 
//      X can be placed before L (50) and C (100) to make 40 and 90. 
//      C can be placed before D (500) and M (1000) to make 400 and 900.
int main(){
    string roman;
    cin>>roman;
    int number = 0;
    for(int i = 0; i < roman.length(); i++){
        if(roman[i] == 'I'){
            if((roman[i+1] == 'X') || (roman[i+1] =='V')){
                number += 0;
            }
            else{
                number += 1;
            }
        }
        if(roman[i] == 'V'){
            if(roman[i-1] == 'I'){
                number += 4;
            }
            else{
                number += 5;
            }
        }
        if(roman[i] == 'X'){
            if(roman[i-1] == 'I'){
                number += 9;
            }
            else{
                if((roman[i+1] == 'L') || (roman[i+1] == 'C')){
                    number += 0;
                }
                else{
                    number += 10;
                }
            }
        }
        if(roman[i] == 'L'){
            if(roman[i-1] == 'X'){
                number += 40;
            }
            else{
                number += 50;
            }
        }
        if(roman[i] == 'C'){
            if(roman[i-1] == 'X'){
                number += 90;
            }
            else{
                if((roman[i+1] == 'M') || (roman[i+1] == 'D')){
                    number += 0;
                }
                else{
                    number += 100;
                }
            }
        }
        if(roman[i] == 'D'){
            if(roman[i-1] == 'C'){
                number += 400;
            }
            else{
                number += 500;
            }
        }
        if(roman[i] == 'M'){
            if(roman[i-1] == 'C'){
                number += 900;
            }
            else{
                number += 1000;
            }
        }
    }
    cout<<number;
    return 0;
}

// done
// https://leetcode.com/problems/roman-to-integer/