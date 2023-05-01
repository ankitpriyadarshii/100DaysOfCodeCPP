//Distribute Candies
/*https://leetcode.com/problems/distribute-candies/description/*/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n;
        unordered_set<int> s;
        n = candyType.size();
        for (int i = 0; i < n; ++i)
            s.insert(candyType[i]);
        if (n/2 <= s.size())
            return n/2;
        else 
            return s.size();
    }
};