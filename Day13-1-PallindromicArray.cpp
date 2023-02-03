// Palindromic Array
/* Given a Integer array A[] of n elements. 
Your task is to complete the function PalinArray. 
Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to check whether a given number is pallindrome or not
bool checkPalindrome(int x) {
    string convertedNumber = to_string(x);

    string reverseString = convertedNumber;
    reverse(reverseString.begin(), reverseString.end());
    return reverseString == convertedNumber ? true : false;
}

// Function for check whether the array is pallindromic or not
int PalinArray(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (checkPalindrome(a[i]))
            count++;
    }

    if (count == n)
        return 1;
    else
        return 0;
}


// Driver code
int main()
{   
    int a[] = { 121, 222, 111, 343, 898, 232 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << PalinArray(a, n);

	return 0;
}
