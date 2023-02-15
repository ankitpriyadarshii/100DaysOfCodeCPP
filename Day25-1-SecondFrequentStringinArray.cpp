// Second most repeated string in a sequence
/*Given a sequence of strings, the task is to find out the second most repeated (or frequent) string in the given sequence.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to calculate second most repeated word in the array of strings.
string secFrequent(string arr[], int n)
{
    unordered_map<string, int>m;

    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }
    
    int res = INT_MIN;

    for (int i = 0; i < n; i++) {
        res = max(res, m[arr[i]]);
    }

    int ans = INT_MIN;
    string count = "";
    for (auto& x : m)
    {
        if (x.second != res && ans < x.second)
        {
            ans = x.second;
            count = x.first;
        }
    }
    return count;
}

// Driver code
int main()
{   
    string arr[] = { "aaa", "bbb", "ccc", "bbb", "aaa", "aaa" };
    int n = sizeof(arr) / sizeof(arr[0]);
	cout << secFrequent(arr, n);
	
    return 0;
}
