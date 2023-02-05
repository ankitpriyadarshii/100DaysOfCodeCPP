// Smallest subarray with sum greater than x
/* Given an array of integers (A[])  and a number x, find the smallest subarray 
with sum greater than the given value. If such a subarray do not exist return 0 in that case..*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to return length of smallest subarray with sum grater than x.
int smallestSubWithSum(int arr[], int n, int x)
{
    int s = 0;
    int i = 0, j = 0;
    int l = INT_MAX;
    while (i < n) {
        s += arr[i];
        if (s > x) {
            while (s > x) {
                l = min(l, i - j + 1);
                s -= arr[j];
                j++;
            }
        }
        i++;
    }
    return l;
}


// Driver code
int main()
{   
    int a[] = { 1, 4, 45, 6, 0, 19 };
    int X = 51;
    int n = sizeof(a) / sizeof(a[0]);
    cout << smallestSubWithSum(a, n, X);

	return 0;
}
