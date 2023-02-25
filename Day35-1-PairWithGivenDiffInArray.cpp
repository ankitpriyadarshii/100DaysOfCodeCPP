// Find Pair Given Difference
/*Given an array Arr[] of size L and a number N, 
you need to write a program to find if there exists a pair of elements in the array whose difference is N.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return true of pair exist otherwise false
bool findPair(int arr[], int size, int n) {

    unordered_map<int, int>mp;

    for (int i = 0; i < size; i++)
    {
        mp[arr[i]] = i;
    }
    for (int i = 0; i < size; i++)
    {
        if (mp.find(n + arr[i]) != mp.end() && mp[n + arr[i]] != i)
        {
            return true;
        }
    }
    return false;
}


// Driver code
int main()
{   
    int A[] = { 5, 20, 3, 2, 5, 80 };
    int S = sizeof(A) / sizeof(A[0]);
    int N = 78;

    cout << findPair(A, S, N);
    return 0;
}
