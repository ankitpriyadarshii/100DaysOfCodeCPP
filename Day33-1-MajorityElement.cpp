// Majority Element
/*Given an array A of N elements. Find the majority element in the array. 
A majority element in an array A of size N is an element that appears more than N/2 times in the array.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return the majority element from array a[]
int majorityElement(int a[], int size)
{
    unordered_map<int, int> major;
    for (int i = 0; i < size; i++)
        major[a[i]]++;

    int count = 0;
    for (auto i : major) {
        if (i.second > size / 2) {
            count = 1;
            return i.first;
            break;
        }
    }
    if (count == 0)
        return -1;
}


// Driver code
int main()
{   
    int A[] = { 3,1,3,3,2 };
    int N = sizeof(A) / sizeof(A[0]);

    cout << majorityElement(A, N);
    return 0;
}
