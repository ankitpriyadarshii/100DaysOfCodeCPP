//Check if the Sentence Is Pangram
/*A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
*/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> charSet(sentence.begin(), sentence.end());
        return charSet.size() == 26;
    }
};