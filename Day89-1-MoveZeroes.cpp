//Move Zeroes
/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int start=0, end=size-1, mid=0;
        while(mid<=end){
            if(nums[mid]!=0){
                swap(nums[start],nums[mid]);                  
                    start++;
            }
            mid++;
        }
    }
};