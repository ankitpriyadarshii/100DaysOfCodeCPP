// Largest Sum Contiguous Subarray (Kadane’s Algorithm)

#include <iostream>

using namespace std;

//Function to find the sum of contiguous subarray with maximum sum

long long maxSubarraySum(int arr[], int n) {

    int max_now = INT_MIN, max_end = 0;
    for (int i = 0; i < n; i++) {
        //Adding each element from starting one at a time
        max_end += arr[i];

        //If sum is greater than INT_MIN (Smallest Integer), replace the values
        if (max_now < max_end)
            max_now = max_end;

        //Sum is less than 0, make it 0
        if (max_end < 0)
            max_end = 0;
    }
    return max_now;
}

// Driver Code
int main()
{
    int arr[] = { -1, -2, -3, -4, -5 };
    int n = 5;  // size of array
    
    cout << maxSubarraySum(arr, n);

    return 0;
}