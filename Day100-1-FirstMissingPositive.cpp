//First Missing Positive
/*Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        set<int>numSet;
        for(int i=0;i<n;i++){
            numSet.insert(nums[i]);
        }
        int i=1;

        while(i<=n){
            if(numSet.find(i)!=numSet.end()){
                i++;
            }
            else{
                return i;
            }
          
        }
          return n+1;
    }
};