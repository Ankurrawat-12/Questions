#include<iostream>

using namespace std;

int main(){
    int length;
    int test_height;
    int test_width;
    cin>>length;
    int height[length];
    for(int i = 0; i < length; i++){
        cin>>height[i];
    }
    int max_water = 0;
    for(int i = 0; i<length; i++){
        for (int j = i+1 ; j<length; j++){
            if(height[i] > height[j]){
                test_height = height[j];
            }
            else{
                test_height = height[i];
            }
            test_width = abs(i-j);
            if ((test_height * test_width) > max_water){
                max_water = test_height * test_width;
            }
        }
    }
    cout<<max_water;
    return 0;
}

// done
// https://leetcode.com/problems/container-with-most-water/