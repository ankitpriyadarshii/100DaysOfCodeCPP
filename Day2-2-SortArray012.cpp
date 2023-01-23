// Sort Array of 0, 1, 2 only
/*Given an array A[] consisting of only 0s, 1s, and 2s. 
The task is to write a function that sorts the given array. 
The functions should put all 0s first, then all 1s and all 2s in last.*/


#include <iostream>

using namespace std;

// Function to sort the input array of 0, 1, 2 as elements

void sortArray012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    while (mid <= hi) {
        switch (a[mid]) {

            // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;

            // If the element is 1 .
        case 1:
            mid++;
            break;

            // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}

// Function to print array arr[]
void printArray(int arr[], int arr_size)
{
 
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}

// Driver Code
int main()
{
    int arr[] = { 2, 1, 0, 1, 2, 0, 1, 0, 1, 0, 2, 1, 0, 2, 0, 1, 1, 1, 0, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray012(arr, n);

    printArray(arr, n);

    return 0;
}