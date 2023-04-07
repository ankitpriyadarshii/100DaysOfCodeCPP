// String in lexicographically-sorted order.
/*Given a string S, Find all the possible subsequences of the String in lexicographically-sorted order.*/
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


vector<string> AllPossibleStrings(string s) {

	vector<string> ans;
	int n = s.length();
	int size = (1 << n);
	for (int i = 1; i < size; i++) {
		string res = "";
		for (int j = 0; j < n; j++) {
			if ((1 << j) & i)
				res += s[j];
		}
		ans.push_back(res);
	}
	sort(ans.begin(), ans.end());
	return ans;
}


// Driver Code Starts.
int main() {
	string s;
	cin >> s;
	vector<string> res = AllPossibleStrings(s);
	for (auto i : res)
		cout << i << " ";
	cout << "\n";
	return 0;
}
