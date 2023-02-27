// Merging two unsorted arrays in sorted order
/*GIven two different arrays A and B of size N and M, 
the task is to merge the two arrays which are unsorted into another array which is sorted*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return sorted array after merging two unsorted arrays
void sortedMerge(int a[], int b[], int res[], int n, int m)
{
	for (int i = 0; i < n; i++) {
		res[i] = a[i];
	}
	for (int j = n; j < n + m; j++) {
		res[j] = b[j - n];
	}

	return sort(res, res + (n + m));
}


// Driver code
int main()
{   
	int A[] = { 1, 10, 5, 15 };
	const int N = 4;
	int B[] = { 20, 0, 2 };
	const int M = 3;
	int RES[N + M];

	sortedMerge(A, B, RES, N, M);
	for (int i = 0; i < N + M; i++)
		cout << RES << " ";
    
	return 0;
}
