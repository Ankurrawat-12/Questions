#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    string input;
    cin>>input;
    int length = input.length();
    int power_size = pow(2, length);

    for(int counter = 0; counter < power_size; counter++){
        for(int j = 0; j < length; j++){
            if((counter & (1 << j)) != 0){
                cout<<input[j];
            }
        }
        cout<<endl;
    }
    return 0;
}

// length = 3
// power = 8

//      c b a
// 0) 0 0 0 0  ""
// 1) 0 0 0 1  "a"
// 2) 0 0 1 0  "b"
// 3) 0 0 1 1  "ab"
// 4) 0 1 0 0  "c"
// 5) 0 1 0 1  "ac"
// 6) 0 1 1 0  "bc"
// 7) 0 1 1 1  "abc"