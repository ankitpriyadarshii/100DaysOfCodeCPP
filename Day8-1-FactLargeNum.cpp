// Factorial of Large Numbers
/*Given an integer N, find its factorial.*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function for calculating factorial and adding it into 'res' vector
vector<int> factorial(int N) {
    vector<int> res;
    res.push_back(1);
    for (int x = 2; x <= N; x++)
    {
        int carry = 0;
        for (int i = 0; i < res.size(); i++)
        {
            int value = res[i] * x + carry;
            res[i] = value % 10;
            carry = value / 10;
        }

        while (carry)
        {
            res.push_back(carry % 10);
            carry = carry / 10;
        }
    }
    // Reversing 'res' since last number is at first position 
    reverse(res.begin(), res.end());
    return res;
}
// Driver code
int main()
{
    int N = 100;
    vector<int> result = factorial(N);
    for (int i = 0; i < result.size(); ++i)
        cout << result[i];
    cout << endl;
	return 0;
}
