// Min and Max element of an Array

#include <iostream>


using namespace std;


int main() {
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int min = arr[0];
    int max = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "\n" << max << "\n" << min;
    return 0;
}