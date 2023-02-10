// Median in a row-wise sorted Matrix
/*Given a row wise sorted matrix of size R*C where R and C are always odd, find the median of the 2D matrix.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to return the median of 2D matrix.
int median(vector<vector<int>>& matrix, int R, int C) {
    
    //converting the 2D Matrix into 1D Array
    vector <int> arr;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            arr.push_back(matrix[i][j]);

    // Sorting the array
    sort(arr.begin(), arr.end());

    // In sorted array, median will be at the middle index
    return arr[(R * C) / 2];
}



// Driver code
int main()
{   
    vector<vector<int>> matrix = 
    { 
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9} 
    };

    int r = 3;
    int c = 3;
    // calling function to get the mediun of the matrix
    cout << median(matrix, r, c);
	
    return 0;
}
