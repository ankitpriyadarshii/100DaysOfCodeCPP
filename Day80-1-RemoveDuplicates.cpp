// Remove Duplicates
/* Given a string without spaces, the task is to remove duplicates from it.

Note: The original order of characters must be kept the same. */
#include<iostream>
#include<vector>
#include <algorithm>
#include <map>

using namespace std;

string removeDups(string S)
{
    // Your code goes here
    string s;
    for (int i = 0; i < S.size(); i++)
    {
        if (S.find(S[i]) == i)
            s += S[i];
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout << removeDups(s) << "\n";

    return 0;
}