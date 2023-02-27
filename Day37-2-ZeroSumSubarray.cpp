// Zero Sum Subarrays
/*You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return scount of subarrays with sum as 0
long long int findSubarray(vector<long long int>& a, int n) {

    long long int sum = 0, count = 0;
    unordered_map<long long int, long long int>m;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == 0) {
            count++;
        }
        if (m.find(sum) != m.end()) {
            count = count + m[sum];
        }
        m[sum]++;
    }
    return count;
}


// Driver code
int main()
{   
    vector<long long int> arr{ 6,-1,-3,4,-2,2,4,6,-12,-7 };
    int N = arr.size();

    cout << findSubarray(arr, N);

	return 0;
}
