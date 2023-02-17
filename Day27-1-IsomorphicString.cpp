// Isomorphic Strings
/*Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for 
every character of str1 to every character of str2 while preserving the order.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
#define MAX_CHARS 256

// Function to check if two strings are isomorphic are not.
bool areIsomorphic(string str1, string str2)
{
    if (str1.length() != str2.length()) {
        return false;
    }
    unordered_map<char, char> a, b;
    for (int i = 0; i < str1.length(); i++)
    {
        if (!a[str1[i]] and !b[str2[i]]) {
            a[str1[i]] = str2[i];
            b[str2[i]] = str1[i];
        }
        else {
            if (a[str1[i]] != str2[i] || b[str2[i]] != str1[i]) {
                return false;
            }
        }
    }
    return true;
}


// Driver code
int main()
{   
    string s1 = "abc";
    string s2 = "xyz";

	cout << areIsomorphic(s1, s2);
	
    return 0;
}
