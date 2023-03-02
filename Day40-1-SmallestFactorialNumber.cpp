// Smallest factorial number
/*Given a number n. The task is to find the smallest number whose factorial contains at least n trailing zeroes*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to return count of 5s among the factors of a number
int get_count(int x)
{
    int ans = 0;
    while (x / 5 > 0) {
        ans += x / 5;
        x /= 5;
    }
    return ans;
}

// Function to find the smallest number with n trailing zeros in its factorial
int findNum(int n)
{
    int low = 0, high = 1e9, ans = -1;
    while (low <= high)
    {
        // Binary search to find the required number
        int mid = low + (high - low) / 2;
        int cnt = get_count(mid);
        if (cnt >= n)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

// Driver code
int main()
{   
    int N = 1;

    cout << findNum(N);

	return 0;
}
