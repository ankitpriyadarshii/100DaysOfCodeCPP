// Median of 2 Sorted Arrays of Different Sizes
/* Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays..*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to return the median of 2 sorted array
double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
{
    // Your code goes here
    vector<int>v;

    // store the array in the new array
    for (auto num : nums1)
        v.push_back(num);

    for (auto num : nums2)
        v.push_back(num);

    // Sort the array to find the median
    sort(v.begin(), v.end());

    int n = v.size();

    return n % 2 ? v[n / 2] : (v[n / 2 - 1] + v[n / 2]) / 2.0;
}


// Driver code
int main()
{   
    vector<int> v1{ 1,5,9 };
    vector<int> v2{ 2,3,6,7 };
    cout << MedianOfArrays(v1, v2);

	return 0;
}
