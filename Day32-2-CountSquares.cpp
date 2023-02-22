// Count Squares
/*Consider a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on. 
You are given a number N, you have to output the number of integers less than N in the sample space S.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include<cmath>

using namespace std;

// Function to count number of square which is less than N
int countSquares(int N) {
    // code here
    int r = sqrt(N);
    int res = 0;
    for (int i = 1; i <= r; i++) {
        if (i * i < N)
            res++;
    }
    return res;
}


// Driver code
int main()
{   
    int n = 13;
    
    int ans = countSquares(n);
    cout << ans;
    return 0;
}
