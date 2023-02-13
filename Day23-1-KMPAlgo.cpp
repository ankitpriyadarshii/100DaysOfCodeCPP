// Longest Prefix Suffix (KMP Algo)
/*Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to calculate length of the longest prefix that is also a proper suffix.
int lps(string s) {
	int i = 1; 
	int len = 0;
	int n = s.size();
	vector<int> lp(n, 0);
	while (i < n)
	{
		if (s[i] == s[len])
		{
			lp[i] = len + 1;
			i++;
			len++;
		}
		else {
			if (len != 0)
			{
				len = lp[len - 1];
			}
			else {
				lp[i] = 0;
				i++;
			}

		}
	}

	return lp[n - 1];
}  

// Driver code
int main()
{   
    string str = "abab";

	cout << lps(str);
	
    return 0;
}
