// Stickler Thief (Max sum such that no 2 elements are alternate)
/*Stickler the thief wants to loot money from a society having n houses in a single line. 
He is a weird person and follows a certain rule when looting the houses. 
According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. 
The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. 
He asks for your help to find the maximum money he can get if he strictly follows the rule. 
Each house has a[i] amount of money present in it.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return the maximum sum of alternate elements
int FindMaxSum(int arr[], int n)
{
    vector<int> dp(n, 0);
    dp[0] = arr[0];
    for (int i = 1; i < n; i++) {
        int include = dp[i - 2] + arr[i];
        int exclude = dp[i - 1] + 0;
        dp[i] = max(include, exclude);
    }
    return dp[n - 1];
}


// Driver code
int main()
{   
    int A[] = { 5, 5, 10, 100, 10, 5 };
    int N = sizeof(A) / sizeof(A[0]);

    cout << FindMaxSum(A, N);
    return 0;
}
