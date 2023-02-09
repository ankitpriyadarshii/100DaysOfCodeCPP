// Rotate a 2D Matrix by 90 degrees.
/*You are given an n x n 2D matrix, rotate the matrix by 90 degrees (clockwise).
You have to rotate the matrix in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to return the rotated 2D matrix.
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
        reverse(matrix[i].begin(), matrix[i].end());
    }

}



// Driver code
int main()
{   
    vector<vector<int>> matrix = { {16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 } };

    // calling function to rotate the matrix
	rotate(matrix);
    
    // printing the rotated matrix
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}
