// Minimum characters to be added at front to make string palindrome
/*Given string str of length N. The task is to find the minimum characters to be added at the front to make string palindrome.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to calculate number of characters needed to add in front.
int minChar(string s) {
    int n = s.size();
    vector<int> lps(2 * n + 1, 0);
    lps[0] = 0;
    int low = 0, i = 1;
    string rev = s;
    reverse(rev.begin(), rev.end());
    string updated = s + "$" + rev;
    while (i < 2 * n + 1)
    {
        if (updated[low] == updated[i])
        {
            low++;
            lps[i] = low;
            i++;
        }
        else
        {
            if (low != 0)
                low = lps[low - 1];
            else
                i++;
        }
    }
    return n - lps[2 * n];
}

// Driver code
int main()
{   
    string s = "abc";

	cout << minChar(s);
	
    return 0;
}
