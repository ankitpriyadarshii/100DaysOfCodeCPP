//Find the Difference of Two Arrays
/*Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
answer[1] is a list of all distinct integers in nums2 which are not present in nums1.*/

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>n1;
        unordered_map<int,int>n2;
        vector<vector<int>>v(2);
        for(int i=0;i<nums1.size();i++){
            n1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            n2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(n2[nums1[i]]==0){
                v[0].push_back(nums1[i]);
                n2[nums1[i]]++;
            }
        }
          for(int i=0;i<nums2.size();i++){
            if(n1[nums2[i]]==0){
                v[1].push_back(nums2[i]);
                n1[nums2[i]]++;
            }
          }
          return v;
    }
};