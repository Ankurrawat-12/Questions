#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int find_factorial(int);
int find_trailing_zeros(int);

int main(){
    int number;
    cin>>number;
    // int factorial = find_factorial(number);
    // int trailing_zeros = find_trailing_zeros(factorial);
    int trailing_zeros = floor(number/5) + floor(number/25) + floor(number/125);
    cout<<trailing_zeros;
}

// int find_factorial(int number){
//     if(number == 0){
//         return 1;
//     }
//     return number * find_factorial(number-1);
// }

// int find_trailing_zeros(long int factorial){
//     int trailing_zeros = 0;
//     for(int i = floor(log10(factorial) + 1); i > 0; i--){
//         if(to_string(factorial)[i -1] == '0'){
//             trailing_zeros += 1;
//         }
//         else{
//             return trailing_zeros;
//         }
//     }
//     return trailing_zeros;
// }

// int find_trailing_zeros(int factorial){
//     int trailing_zeros = 0;
//     while (factorial % 10 == 0)
//     {
//         trailing_zeros += 1;
//         factorial /= 10;
//     }
    
//     return trailing_zeros;
// }


// solved
// https://leetcode.com/problems/factorial-trailing-zeroes/submissions/