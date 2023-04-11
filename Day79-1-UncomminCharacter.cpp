// Uncommon characters
/* Given two strings A and B. Find the characters that are not common in the two strings. 

Note :- Return the string in sorted order.*/
#include<iostream>
#include<vector>
#include <algorithm>
#include <map>

using namespace std;


string UncommonChars(string A, string B)
{
    map<char, int>m;
    for (int i = 0; i < A.size(); i++) {
        if (m[A[i]])
            continue;
        else
            m[A[i]] = 1;
    }

    for (int i = 0; i < B.size(); i++) {
        if (m[B[i]] == 1 || m[B[i]] == 3) {
            m[B[i]] = 3;
        }
        else if (m[B[i]] == 2) {
            continue;
        }
        else {
            m[B[i]] = 2;
        }
    }

    string s;
    for (auto i : m) {
        if (i.second == 1 || i.second == 2) {
            s.push_back(i.first);
        }
    }

    if (s.size() > 0) {
        return s;
    }
    return "-1";
}


//{ Driver Code Starts.

int main()
{
    string A, B;
    cin >> A;
    cin >> B;
    cout << UncommonChars(A, B);
    cout << endl;
    return 0;
}