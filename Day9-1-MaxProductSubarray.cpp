// Max Product of a sub-array
/*Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function for calculating max product of sub-array in the given array
long long maxProduct(vector<int> nums, int n) {

    long long  ans = nums[0];
    long long  ma = ans;
    long long  mi = ans;

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) {
            swap(ma, mi);
        }
        long long store1 = ma * nums[i];
        long long store2 = mi * nums[i];
        long long store3 = nums[i];
        ma = max(store3, store1);
        mi = min(store3, store2);
        ans = max(ans, ma);
    }
    return ans;
}

// Driver code
int main()
{   
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    auto ans = maxProduct(arr, n);
    cout << "Max Producet: " << ans;
	return 0;
}
