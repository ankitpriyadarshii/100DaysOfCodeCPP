//Chocolate Distribution Problem
/*Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. 
Each packet can have a variable number of chocolates. 
There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.*/


#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


long long findMinDiff(vector<long long> a, long long n, long long m) {
	sort(a.begin(), a.end());
	long long ans = LLONG_MAX;
	long long st = m - 1;
	while (st < n) {
		ans = min(ans, a[st] - a[st - m + 1]);
		st++;
	}
	return ans;
}

// Driver Code Starts.
int main() {
	long long n;
	cin >> n;
	vector<long long> a;
	long long x;
	for (long long i = 0; i < n; i++){
		cin >> x;
		a.push_back(x);
	}

	long long m;
	cin >> m;
	cout << findMinDiff(a, n, m) << endl;

	return 0;
}
