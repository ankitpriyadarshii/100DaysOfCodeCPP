//Create Target Array in the Given Order
/*Given two arrays of integers nums and index. Your task is to create target array*/

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
		for (int i = 0; i < nums.size(); i++)
		{
			target.insert(target.begin() + index[i], nums[i]);
		}
		return target;
    }
};