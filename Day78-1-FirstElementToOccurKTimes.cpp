// First element to occur k times
/* Given an array of N integers.Find the first element that occurs at least K number of times.*/
#include<iostream>
#include<vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


int firstElementKTime(int a[], int n, int k)
{
	unordered_map<int, int> m;
	for (int i = 0; i < n; i++) {
		m[a[i]]++;
		if (m[a[i]] >= k)
			return a[i];
	}
	return 0;
}

//{ Driver Code Starts.

int main() {
	int n, k;
	cin >> n >> k;
	int a[] = { 1, 7, 4, 3, 4, 8, 7 };
	cout << firstElementKTime(a, n, k) << endl;
	return 0;
}