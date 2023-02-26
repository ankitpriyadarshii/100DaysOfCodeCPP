// Count triplets with sum smaller than given sum
/*Given an array arr[] of distinct integers of size N and a value sum.
The task is to find the count of triplets (i, j, k), having (i<j<k) 
with the sum of (arr[i] + arr[j] + arr[k]) smaller than the given value sum.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return count of triplets having sum lesser than the given sum
long long countTriplets(long long arr[], int n, long long sum)
{   
    sort(arr, arr + n);
    long long  count = 0;
    for (int i = 0; i + 2 < n; i++) {
        long long j = i + 1;
        long long k = n - 1;
        while (k > j) {
            long long res = arr[i] + arr[j] + arr[k];
            if (res < sum) {
                count += k - j;
                j++;
            }
            else {
                k--;
            }
        }
    }
    return count;
}


// Driver code
int main()
{   
    long long A[] = { 5, 1, 3, 4, 7 };
    int N = sizeof(A) / sizeof(A[0]);
    int SUM = 12;

    cout << countTriplets(A, N, SUM);
    return 0;
}
