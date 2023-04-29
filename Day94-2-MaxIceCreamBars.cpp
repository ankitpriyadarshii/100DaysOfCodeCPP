//Maximum Ice Cream Bars
/* https://leetcode.com/problems/maximum-ice-cream-bars/description/ */

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int noOfIceCreams = 0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(costs[i]>coins)break;
            coins -= costs[i];
            noOfIceCreams++;
        }
        return noOfIceCreams;
    }
};