//Sum of Unique Elements
/*You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> unique;
        int sum = 0;
        for(auto it:nums)
            unique[it]++;
        for(auto it:unique)
        {
            if(it.second==1)
                sum+=it.first;
        }
        return sum;
    }
};