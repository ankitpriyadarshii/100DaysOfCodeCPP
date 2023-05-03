//Truncate Sentence

class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int space_count=0;
        for(auto i:s){
            if(i==' ')
                space_count++;
            if(space_count<k){
                ans+=i;
            }
        }
        return ans;
    }
};
