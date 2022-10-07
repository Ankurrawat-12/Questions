// #include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int length;
    cin>>length;
    int salary_array[length];
    for(int i = 0; i <length; i++){
        cin>>salary_array[i];
    }
    int min_salary = salary_array[0], max_salary = 0;
    float average_salary = 0;
    for(int i = 0; i < length; i++){
        if(salary_array[i] < min_salary){
            min_salary = salary_array[i];
        }
        else if(salary_array[i] > max_salary){
            max_salary = salary_array[i];
        }
    }
    for(int i = 0; i <length; i++){
        if((salary_array[i] != min_salary) && (salary_array[i] != max_salary)){
            average_salary += salary_array[i];
        }
    }
    average_salary /= (length-2);
    cout << fixed << setprecision(5)<<average_salary;
}

// done
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/