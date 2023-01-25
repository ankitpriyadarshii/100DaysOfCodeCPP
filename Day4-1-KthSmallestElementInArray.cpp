// Kth Smallest Element in an array

#include <iostream>
#include<algorithm>

using namespace std;

//Function to find the sum of contiguous subarray with maximum sum
// arr : given array
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int r, int k) {

    sort(arr, arr + r + 1);  //in-built function for sorting array
    return arr[k - 1];  //returning element at [K-1] in the sorted array
}

// Driver Code
int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int K = 3;  
    int size = sizeof(arr) / sizeof(arr[0]);   // size of array
    cout << kthSmallest(arr, size-1, K);

    return 0;
}