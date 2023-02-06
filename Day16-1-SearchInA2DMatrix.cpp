// Search in a 2D Matrix
/* You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to return true if the element target is found.
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.size() == 0)
        return false;

    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = (n * m) - 1;

    while (low <= high)
    {
        int mid = (low + (high - low) / 2);
        if (matrix[mid / m][mid % m] == target)
            return true;

        if (matrix[mid / m][mid % m] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}


// Driver code
int main()
{   
    vector <vector<int>> matrix
    {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 4;
    bool res = searchMatrix(matrix, target);
    cout << res;
	return 0;
}
