#include<bits/stdc++.h>

using namespace std;

int numberOfCombinations(vector<int> numbers){
    int combinations = 0;
    sort(numbers.begin(), numbers.end());
    int diff = numbers[numbers.size()-1] - numbers[0];

    int left = 1;
    int right = numbers.size()-1;
    while(true){
        if(numbers[left -1] == numbers[left]){
            left++;
        }
        else if(numbers[right] == numbers[right - 1]){
            right--;
        }
        else{
            break;
        }
    }
    
    // for(int i = 0; i < numbers.size(); i++){
    //     for(int j = 0; j < numbers.size(); j++){
    //         if(i == j){
    //             continue;
    //         }
    //         else{
    //             if(abs(numbers[i] - numbers[j]) == diff){
    //                 combinations++;
    //             }
    //         }
    //     }
    // }

    return 2*(left * (numbers.size() - right));
}

int main(){
    int testcases;
    cin>>testcases;

    for(int i = 0; i < testcases; i++){
        int size;
        cin>>size;
        vector<int> numbers;
        for(int i = 0; i < size; i++){
            int element;
            cin>>element;
            numbers.push_back(element);
        }

        cout<<numberOfCombinations(numbers)<<endl;
    }

}