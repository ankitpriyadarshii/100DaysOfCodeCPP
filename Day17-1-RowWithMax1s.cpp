// Row with max 1s
/*Given a boolean 2D array of n x m dimensions where each row is sorted. 
Find the 0-based index of the first row that has the maximum number of 1's.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to return row with maximum number of 1s.
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	int max_1 = 0;
	int max_row_index = -1;
	int curr_col = m - 1;
	for (int i = 0; i < n; i++) {
		while (curr_col >= 0 && arr[i][curr_col] == 1) {
			curr_col = curr_col - 1;
			max_row_index = i;
		}
	}
	return max_row_index;
}


// Driver code
int main()
{   
    vector <vector<int>> arr
    {
		{0, 1, 1, 1},
		{0, 0, 1, 1},
		{1, 1, 1, 1},
		{0, 0, 0, 0}
    };
	int n = 4;
	int m = 4;
	cout << rowWithMax1s(arr, n, m);

	return 0;
}
