// Merge Intervals
/*Given a set of time intervals in any order, merge all overlapping intervals into one 
and output the result which should have only mutually exclusive intervals.*/

#include <iostream>
#include <algorithm>

using namespace std;


// Interval
struct Interval {
	int s, e;
};

// Function used in sort
bool comp(Interval a, Interval b) { 
	return a.s < b.s; 
}

void mergeIntervals(Interval arr[], int n)
{
	// Sort Intervals in increasing order 
	sort(arr, arr + n, comp);

	int index = 0; // Stores index of last element

	for (int i = 1; i < n; i++) {
		// If this is not first Interval and overlaps with the previous one
		
		if (arr[index].e >= arr[i].s) {
			// Merge previous and current Intervals
			arr[index].e = max(arr[index].e, arr[i].e);
		}
		else {
			index++;
			arr[index] = arr[i];
		}
	}

	// Now arr[0..index-1] stores the merged Intervals
	cout << "\n The Merged Intervals are: ";
	for (int i = 0; i <= index; i++)
		cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}

// Driver code
int main()
{
	Interval arr[]
		= { {1, 3},{2, 6},{8, 10},{15, 18} };
	int n = sizeof(arr) / sizeof(arr[0]);
	mergeIntervals(arr, n);
	return 0;
}
