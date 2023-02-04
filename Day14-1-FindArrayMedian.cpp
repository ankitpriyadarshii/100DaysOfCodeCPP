// Find the median
/* Given an array arr[] of n integers, calculate the median.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to find median of a given array
int find_median(int v[], int n)
{
	int med;

	sort(v, v+n);

	if (n % 2 == 0){
		med = (v[n / 2] + v[(n / 2) - 1]) / 2;
	}
	else{
		med = v[n / 2];
	}

	return med;
}

// Driver code
int main()
{   
    int a[] = { 90, 100, 78, 89, 67 };
    int n = sizeof(a) / sizeof(a[0]);
    
	cout << find_median(a, n);

	return 0;
}
