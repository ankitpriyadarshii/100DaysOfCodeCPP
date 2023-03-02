// Sort by Set Bit Count
/*Given an array of integers.
Sort the array (in descending order) according to count of set bits (1s) in binary representation of array elements. */

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>


using namespace std;

// Function to count number of 1s in binary representation of a decimal number
int decimalToBinary(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}

// Funtion for sorting based on set bits
void sortBySetBitCount(int arr[], int n)
{    
    map<int, vector<int>> map;
    for (int i = 0; i < n; i++)
    {
        int n = decimalToBinary(arr[i]);
        map[n].push_back(arr[i]);
    }
    int i = n - 1;
    for (auto x : map)
    {
        int index = x.first;
        reverse(map[index].begin(), map[index].end());
        for (auto y : map[index])
        {
            arr[i] = y;
            i--;
        }
    }
}

// Driver code
int main()
{   
    int ARR[] = { 5, 2, 3, 9, 4, 6, 7, 15, 32 };
    int N = 9;

    sortBySetBitCount(ARR, N);

    for (int i = 0; i < N; i++)
        cout << ARR[i] << " ";

	return 0;
}
