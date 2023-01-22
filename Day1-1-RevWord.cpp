// Reverse a given word

#include <iostream>

using namespace std;

// Reverse word Function

string RevWord(string s) {
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
    cin >> s;
    cout << RevWord(s);
}
