// Reverse a given string

#include <iostream>
#include<string>

using namespace std;

// Reverse String Function

string RevString(string s) {
    int n;
    n = s.length();
    string rev = "";
    for (int i = n; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}
//Driver function

int main()
{
    string s;
    getline(cin, s);
    cout << RevString(s);
}
