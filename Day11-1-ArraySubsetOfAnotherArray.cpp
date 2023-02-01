// Array Subset of another array
/* Given two arrays : a1[0..n - 1] of size n and a2[0..m - 1] of size m.Task is to check whether
a2[] is a subset of a1[] or not.Both the arrays can be sorted or unsorted. .*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// Function for returning whether a2 is subset of a1 or not
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) 
        mpp[a1[i]]++;


    for (int i = 0; i < m; i++) {
        if (mpp[a2[i]] < 1) 
            return "No";
        else {
            mpp[a2[i]]--;
        }
    }
    return "Yes";
}

// Driver code
int main()
{   
    int a1[] = { 2,6,1,9,4,5,3 };
    int a2[] = { 3,2,6,4 };
    int n = sizeof(a1) / sizeof(a1[0]);
    int m = sizeof(a2) / sizeof(a2[0]);
    cout << isSubset(a1, a2, n, m);
	return 0;
}
