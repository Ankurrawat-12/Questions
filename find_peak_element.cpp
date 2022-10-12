#include<iostream>
#include<vector>

using namespace std;

int findPeakElement(vector<int>&);

int main(){
    int length;
    cin>>length;
    // int numbers[length];

    vector<int> numbers;

    for(int i = 0; i < length ; i++){
        int temp;
        cin>> temp;
        numbers.push_back(temp);
    }
    int peak_element = findPeakElement(numbers);
    cout<<peak_element;
    return 0;
}

int findPeakElement(vector<int>& nums) {
    int peak_element = 0;
    for(int i = 0; i < nums.size(); i++){
        if(i == 0){
            if(nums[i] > nums[i+2]){
                peak_element = i;
            }
        }
        else if(nums[i] > nums[i +1] && nums[i - 1]){
            peak_element = i;
        }
        else if(i == nums.size() -1){
            if(nums[i] > nums[i -1]){
                peak_element = i;
            }
        }
    }
    return peak_element;
}