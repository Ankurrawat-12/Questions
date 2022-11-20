#include<bits/stdc++.h>

using namespace std;

// bool isUgly(int n)
// {
//     if (n <= 0)
//     {
//         return false;
//     }

//     vector<int> factors = {2, 3, 5};
//     for(int i = 0; i < 3;i++){
//         while(n % factors[i] == 0){
//             n = n/factors[i];
//         }
//     }
//     for (int i = 6; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }


bool isUgly(int n)
{
    if (n <= 0)
    {
        return false;
    }

    vector<int> factors = {2, 3, 5};
    for(int i = 0; i < 3;i++){
        while(n % factors[i] == 0){
            n = n/factors[i];
        }
    }
    if(n==1){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    if(isUgly(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}