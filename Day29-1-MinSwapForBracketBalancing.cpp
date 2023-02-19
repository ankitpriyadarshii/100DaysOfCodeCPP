// Minimum Swaps for Bracket Balancing
/*You are given a string S of 2N characters consisting of N ‘[‘ brackets and N ‘]’ brackets. 
A string is considered balanced if it can be represented in the for S2[S1] where S1 and S2 are balanced strings. 
We can make an unbalanced string balanced by swapping adjacent characters. 
Calculate the minimum number of swaps necessary to make a string balanced.
Note - Strings S1 and S2 can be empty..*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to count minimum number of swaps required

int minimumNumberOfSwaps(string S) {
    // code here 
    int balanced = 0;
    int ans = 0;
    for (auto it : S) {
        if (it == '[') {
            balanced++;
        }
        else {
            balanced--;
            if (balanced < 0) {
                ans += -balanced;
            }
        }
    }
    return ans;
}


// Driver code
int main()
{   
    string S = "[]][][";
    
    cout << minimumNumberOfSwaps(S);
	
    return 0;
}
