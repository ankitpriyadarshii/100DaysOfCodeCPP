// Number of Good Pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        int count=0;
        vector<int>output;
        for(int i=0;i<nums.size();i++)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[i]==nums[j])
                    {
                        count++;
                    }
                }
            }

        return count;
    }
};