//Single Number III
/*Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> a;
        vector<int> ans;
	   	for(auto x: nums)
		   	a[x]++;
	   	for(auto it:a)
		   	if(it.second==1)
			   	ans.push_back(it.first);
	   	return ans; 
    }
};