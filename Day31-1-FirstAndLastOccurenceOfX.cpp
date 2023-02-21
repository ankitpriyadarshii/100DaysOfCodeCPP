// First and last occurrences of x
/*Given a sorted array arr containing n elements with possibly duplicate elements, 
the task is to find indexes of first and last occurrences of an element x in the given array.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function return first and last index of x in arr
vector<int> find(int arr[], int n, int x)
{
    vector<int> res{ -1, -1 };
    for (int i = 0; i <= n; i++) {
        if (arr[i] == x) {
            res[0] = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == x) {
            res[1] = i;
            break;
        }
    }
    return res;
}


// Driver code
int main()
{   
    int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 5;
    
    vector<int> ans = find(arr, n, x);
    cout << ans[0] << " " << ans[1] << endl;
	
    return 0;
}
