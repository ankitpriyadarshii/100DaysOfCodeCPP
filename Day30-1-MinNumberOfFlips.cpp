// Min Number of Flips
/*Given a binary string, that is it contains only 0s and 1s. 
We need to make this string a sequence of alternate characters by flipping some of the bits, 
our goal is to minimize the number of bits to be flipped.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to count the number of flips
int minFlips(string S)
{
    int n = S.size();
    if (n == 1) {
        return 0;
    }
    int mini = 0;
    int count1 = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0 && S[i] == '0') {
            count1++;
        }
        if (i % 2 == 0 && S[i] == '1') {
            count1++;
        }
    }
    mini = min(n - count1, count1);
    return mini;
}


// Driver code
int main()
{   
    string S = "001";
    
    cout << minFlips(S);
	
    return 0;
}
