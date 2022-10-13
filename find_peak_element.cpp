#include<iostream>
#include<vector>

using namespace std;

// int findPeakElement(vector<int>&);
int findPeakElement(int[], int);

int main(){
    int length;
    cin>>length;
    int numbers[length];

    // vector<int> numbers;

    for(int i = 0; i < length ; i++){
        // int temp;
        // cin>> temp;
        // numbers.push_back(temp);
        cin>>numbers[i];
    }
    int peak_element = findPeakElement(numbers, length);
    cout<<peak_element;
    return 0;
}

// int findPeakElement(vector<int>& nums) {
int findPeakElement(int nums[], int length) {
    int peak_element = 0;
    // for(int i = 0; i < nums.size() ; i++){
    for(int i = 0; i < length ; i++){
        if(i == 0){
            if(nums[i] > nums[i+2]){
                peak_element = i;
            }
        }
        // else if(i == nums.size() -1){
        else if(i == length -1){
            if(nums[i] > nums[i -1]){
                peak_element = i;
            }
        }
        else if(nums[i] > nums[i +1] && nums[i - 1]){
            peak_element = i;
        }
    }
    return peak_element;
}