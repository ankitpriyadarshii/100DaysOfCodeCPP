// Kth Smallest Element in a 2D Matrix
/*Given a N x N matrix, where every row and column is sorted in non-decreasing order. 
Find the kth smallest element in the matrix.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

constexpr auto MAX = 10;
using namespace std;

// Function to return row with maximum number of 1s.
int kthSmallest(int mat[MAX][MAX], int n, int K)
{
    if (K > n * n)
        return -1;

    if (K == 1)
        return mat[0][0];

    // Arr to store elemenets of the array
    vector <int> arr;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr.push_back(mat[i][j]);

    // sorting the array
    sort(arr.begin(), arr.end());

    // returning the kth smallest element in the sorted array
    return arr[K - 1];
}

// Driver code
int main()
{   
    int mat[MAX][MAX] = { {16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 } };
	int n = 4;
    int k = 3;
	cout << kthSmallest(mat, n, k);

	return 0;
}
