// Missing number in array
/*Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.*/
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


int MissingNumber(vector<int>& array, int N) {
    // Sum of N natural nume
    int total = N * (N + 1) / 2;
    int sum = 0;
    for (auto x : array)
        sum += x;
    return total - sum;
}

// Driver Code Starts.

int main() {
    int n;
    cin >> n;

    vector<int> array(n - 1);
    for (int i = 0; i < n - 1; ++i) 
        cin >> array[i];
    cout << MissingNumber(array, n) << "\n";
    return 0;
}