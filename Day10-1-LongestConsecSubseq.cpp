// Longest consecutive subsequence
/*Given an array of positive integers. Find the length of the longest 
sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

// Function for calculating longest consecutive subsequence in the given array
int findLongestConseqSubseq(int arr[], int n)
{
    //Your code here
    unordered_set<int>s;
    int res = 0;

    // Inserting array element in unordered set
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    // traversing the set s for each element in set
    for (auto i : s)
    {
        // check if element i is the cadidate for first element of subsequence 
        if (s.find(i - 1) == s.end())
        {   
            // curr store the length of subsequence starting from current element 
            int curr = 1;

            // check the presence of i+1, i+2, ... elemenets in the set
            while (s.find(i + curr) != s.end())
                curr++;

            // update res with length of current subsequence
            res = max(res, curr);
        }
    }
    return res;
}

// Driver code
int main()
{   
    int arr[] = { 2,6,1,9,4,5,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    auto ans = findLongestConseqSubseq(arr, n);
    cout << "Longest Consecutive Subsequence: " << ans;
	return 0;
}
