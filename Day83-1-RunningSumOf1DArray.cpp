//Running Sum of 1d Array
/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumArray;
        for (int i = 0; i < nums.size(); i++){
            int s = 0;
            for (int j = 0; j < i+1; j++){
                s += nums[j];
            }
            sumArray.push_back(s);
        }

        return sumArray;
    }
};