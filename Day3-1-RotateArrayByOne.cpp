// Cyclic Rotate an array by one

#include <iostream>

using namespace std;

// Function to Rotate the array by one
void rotateArrOne(int arr[], int n)
{
    int temp = arr[n - 1];

    // Assigning values at indices the value of previous index
    for (int i = n - 1; i >= 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Assigning value of arr[0] as the last value of original array
    arr[0] = temp;
}

// Driver Code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = 5;  // size of array
    rotateArrOne(arr, n);

    // To print the array
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}