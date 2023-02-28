// Minimum Swaps to Sort
/*Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return count of minimum swaps required
int minSwaps(vector<int>& nums)
{
	int n = nums.size();
	vector<pair<int, int>>v(n);
	for (int i = 0; i < n; ++i) {
		v[i] = { nums[i],i };               //  {{10,0},{19,1},{6,2},{3,3},{5,4}}
	}

	sort(v.begin(), v.end());               //  {{3,3},{5,4},{6,2},{10,0},{19,1}} 
	
	int i = 0;
	int minswap = 0;
	for (int i = 0; i < n; ++i) {
		if (v[i].second != i) {             //eg: {3!=0}
			minswap++;
			swap(v[i], v[v[i].second]);     //{{3,3} swapped with v[3] == {10,0}} ...likewise other
			--i;
		}
	}

	return minswap;
}


// Driver code
int main()
{   
    vector<int> NUMS{ 10, 19, 6, 3, 5 };

    cout << minSwaps(NUMS);

	return 0;
}
