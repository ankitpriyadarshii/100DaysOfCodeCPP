// K-th element of two sorted Arrays
/*Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. 
The task is to find the element that would be at the k’th position of the final sorted array.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return K-th element after merging and sorting 2 different arrays
int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> final;
    for (int i = 0; i < n; i++) {
        final.push_back(arr1[i]);
    }
    for (int j = 0; j < m; j++) {
        final.push_back(arr2[j]);
    }

    sort(final.begin(), final.end());
    return final[k - 1];
}


// Driver code
int main()
{   
    int ARR1[] = { 100, 112, 256, 349, 770 };
    int ARR2[] = { 72, 86, 113, 119, 265, 445, 892 };
    int N = 5;
    int M = 7;
    int K = 7;

    cout << kthElement(ARR1, ARR2, N, M, K);

	return 0;
}
