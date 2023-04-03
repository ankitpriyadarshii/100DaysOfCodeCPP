//Maximize sum(arr[i]*i) of an Array
/*Given an array A of N integers. Your task is to write a program to find the maximum value of ∑arr[i]*i, where i = 0, 1, 2,., n 1.
You are allowed to rearrange the elements of the array.
Note: Since output could be large, hence module 109+7 and then print answer.*/


#include <iostream>
#include <algorithm>
using namespace std;


int Maximize(int a[], int n)
{
    long ans = 0;
    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        ans += (long)a[i] * i;
    }
    long sum = ans % 1000000007;
    return (int)sum;
}

// Driver Code Starts.
int main() {
    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    cout << Maximize(a, 5) << endl;
}