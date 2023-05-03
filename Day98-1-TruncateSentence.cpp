//Truncate Sentence

class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int count=0;
        for(auto i:s){
            if(i==' ')
                count++;
            if(count<k){
                ans+=i;
            }
        }
        return ans;
    }
};