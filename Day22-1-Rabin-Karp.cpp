// Rabin-Karp Algo.
/*Given two strings, one is a text string and other is a pattern string. The task is to 
print the indexes of all the occurences of pattern string in the text string. 
For printing, Starting Index of a string should be taken as 1.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to return List of indices (if any) if pattern is found.
vector <int> search(string pat, string txt)
{
    vector<int> noList{ -1 };
    vector<int> indexList;

    for (int i = 0; i < txt.length(); i++) {
        if (txt.substr(i, pat.length()) == pat) {
            indexList.push_back(i + 1);
        }
    }

    if (indexList.size() > 0)
        return indexList;
    else
        return noList;
}

// Driver code
int main()
{   
    string txt = "batmanandrobinarebat";
    string pat = "bat";

    vector<int> res = search(pat, txt);
    for (int i : res) cout << i << " ";
	
    return 0;
}
