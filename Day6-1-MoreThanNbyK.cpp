// Element more than n/k times in an array
/*Given Array of size n and a number k, find all elements that appear more than n/k times.*/

#include <iostream>
#include <unordered_map>

using namespace std;

//n is size of array
//k is the random number

int morethanNbyK(int arr[], int n, int k)
{
    int x = n / k;
    int count = 0;  // counter for counting the number of elements which appears more than x(i.e., n/k) times
    unordered_map<int, int> fq;

    for (int i = 0; i < n; i++) {
        fq[arr[i]]++;
    }

    // Traversing the map
    for (auto i : fq) {

        // Checking if value of a key-value pair is greater than x (where x=n/k)
        if (i.second > x) {

            // Print the key of whose value is greater than x
            cout << i.first << endl;
            count++;  
        }
    }
    return count;
}

// Driver Code
int main()
{
    int arr[] = { 1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1 };

    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int count;

    cout << "Elements that appear more than n/k times:" << endl;
    count = morethanNbyK(arr, n, k);
    cout << "Total number of elements that appeared more than n/k times: "<<count;
    
    return 0;
}