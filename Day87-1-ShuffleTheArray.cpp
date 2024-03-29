//Shuffle the Array
/*Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn]. */

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        for(int i=0,k=0;i<n;i++,k+=2){
            ans[k]=nums[i];
            ans[k+1]=nums[n+i];
        }
        return ans;
    }
};