// Triplet Sum in Array
/* Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// Function for check whether three numbers exixt or not
bool find3Numbers(int A[], int n, int X)
{
    unordered_map<int, int>mp;

    sort(A, A + n);
    for (int i = 0; i < n; i++) {
        int l = i + 1;
        int r = n - 1;
        int sum = 0;
        while (l < r) {
            sum = A[i] + A[l] + A[r];

            if (sum == X)
                return true;
            if (sum < X)
                l++;
            else if (sum > X)
                r--;
        }
    }
    return false;
}

// Driver code
int main()
{   
    int a[] = { 2,6,1,9,4,5,3 };
    int n = sizeof(a) / sizeof(a[0]);
    int X = 6;
    cout << find3Numbers(a, n, X);

	return 0;
}
