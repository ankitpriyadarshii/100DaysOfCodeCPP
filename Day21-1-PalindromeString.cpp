// Palindrome String
/*Given a string S, check if it is palindrome or not.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to check is string is palindrome or not.
string isPalindrome(string S)
{
    int l = 0;
    int h = S.length() - 1;
    while (h > l) {
        if (S[l++] != S[h--]) {
            return "false";
        }
    }
    return "true";
}


// Driver code
int main()
{   
    string str = "abba";
    // calling function 
    cout << isPalindrome(str);
	
    return 0;
}
