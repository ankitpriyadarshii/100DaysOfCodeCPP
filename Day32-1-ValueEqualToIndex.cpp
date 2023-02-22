// Value equal to index value
/*Given an array Arr of N positive integers. 
Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function return value of element equal to its index
vector<int> valueEqualToIndex(int arr[], int n) {
	// code here
	vector<int> res;
	for (int i = 0; i <= n; i++) {
		if (arr[i] == i + 1)
			res.push_back(i + 1);
	}
	return res;
}


// Driver code
int main()
{   
    int arr[] = { 15, 2, 45, 12, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> ans = valueEqualToIndex(arr, n);
	for (int x : ans)
		cout << x;
    return 0;
}
