// Reverse a given array

#include <iostream>

using namespace std;

// Reverse Array Function

void RevArray(int arr[], int start, int end) {
        while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Fuction to print Array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

//Driver function

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    RevArray(arr, 0, n - 1);
    
    //Revresing the array
    cout << "Reversed array is" << endl;

    printArray(arr, n);

    return 0;
}
