// Wildcard string matching
/*Given two strings wild and pattern where wild string may contain wild card characters and pattern string is a normal string. 
Determine if the two strings match. The following are the allowed wild card characters in first string :-

* --> This character in string wild can be replaced by any sequence of characters, it can also be replaced by an empty string.
? --> This character in string wild can be replaced by any one character.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to compare wild and pattern using recursion.
string s1, s2;

bool solve(int i, int j, vector<vector<int>> dp)
{
    //base condition
    if (i < 0 && j < 0) return true;
    if (i < 0 && j >= 0) return false;
    if (i >= 0 && j < 0)
    {
        while (i >= 0)
        {
            if (s1[i] != '*') return false;
            i--;
        }
        return true;
    }

    if (dp[i][j] != -1) return dp[i][j];

    //comparisions
    if (s1[i] == s2[j] || s1[i] == '?')
    {
        return dp[i][j] = solve(i - 1, j - 1, dp);
    }

    if (s1[i] == '*') {
        return dp[i][j] = solve(i, j - 1, dp) || solve(i - 1, j, dp);
    }

    return false;

}

// function to return the ans
bool match(string wild, string pattern)
{
    s1 = wild;
    s2 = pattern;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));

    bool ans = solve(n - 1, m - 1, dp);
    return ans;
}


// Driver code
int main()
{   
    string wild = "ho?are*";
    string pattern = "howareyou";

	cout << match(wild, pattern);
	
    return 0;
}
