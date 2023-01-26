// Count pairs with given sum
/*Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.*/

#include <iostream>
#include <unordered_map>

using namespace std;

//n is number of integers in the array
//k is the sum for which we need to find the pairs

int getPairsCount(int arr[], int n, int k) {

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    int count = 0;

    for (int i = 0; i < n; i++) {
        count += m[k - arr[i]];


        if (k - arr[i] == arr[i])
            count--;
    }
    return count / 2;
}

// Driver Code
int main()
{
    int arr[] = {7, 10, 1, 4, 3, 20, 15};
    int K = 11;  
    int size = sizeof(arr) / sizeof(arr[0]);   // size of array
    cout << getPairsCount(arr, size, K);

    return 0;
}