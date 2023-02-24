// Find Missing And Repeating
/*Given an unsorted array Arr of size N of positive integers. 
One number 'A' from set {1, 2, N} is missing and one number 'B' occurs twice in array. 
Find these two numbers.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return repeating and missing numbers
int* findTwoElement(int* arr, int n) {
    unordered_map<int, int> mp;

    int* result = new int[2];
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second == 2)  //repeating 
            result[0] = it.first;
    }
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(i) == mp.end())  //missing
        {
            result[1] = i;
            break;
        }
    }
    return result;
}


// Driver code
int main()
{   
    int A[] = { 1, 3, 3 };
    int N = sizeof(A) / sizeof(A[0]);

    auto ans = findTwoElement(A, N);
    // ans[0] is repeating number, ans[1] is missing number
    cout << ans[0] << ", " << ans[1];
    return 0;
}
