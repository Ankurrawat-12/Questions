/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peakElementIndex = 0;
        int right = mountainArr.length() - 1;
        int left = 0;
        int mid;
        // for(int i = 0; i < mountainArr.length(); i++){
        //     if(i = 0 && (mountainArr.get(i) > mountainArr.get(i +1 ))){
        //         peakElementIndex = i;
        //         break;
        //     }
        //     else if((i = mountainArr.length() - 1) && (mountainArr.get(i) > mountainArr.get(i - 1))){
        //         peakElementIndex = i;
        //         break;
        //     }
        //     else{
        //         if((mountainArr.get(i) > mountainArr.get(i - 1) )&& (mountainArr.get(i) > mountainArr.get(i +1 ))){
        //             peakElementIndex = i;
        //             break;
        //         }
        //     }
        // }
        while(left <= right){
            mid = (left+right)/2;
            if(mid==0){
                mid=1;
            }
            if(mid==mountainArr.length()-1){
                mid=mountainArr.length()-2;
            }
            if((mountainArr.get(mid) > mountainArr.get(mid - 1))&& (mountainArr.get(mid) > mountainArr.get(mid + 1))){
                peakElementIndex = mid;
                if(mountainArr.get(peakElementIndex) == target){
                    return peakElementIndex;
                }
                break;
            }
            if((mountainArr.get(mid) > mountainArr.get(mid - 1))&& (mountainArr.get(mid) < mountainArr.get(mid + 1))){
                left = mid + 1;
            }
            else{
                right = mid -1;
            }
        }

        right = peakElementIndex - 1;
        left = 0;

        while(left <= right){
            mid = (right + left)/2;
            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid) > target){
                right = mid -1;
            }
            else{
                left = mid + 1;
            }
        }

        left = peakElementIndex + 1;
        right = mountainArr.length()-1;

        while(left <= right){
            mid = (right + left)/2;
            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid) > target){
                right = mid -1;
            }
            else{
                left = mid + 1;
            }
        }
        return -1;
    }
};