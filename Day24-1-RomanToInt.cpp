// Roman Number to Integer
/*Given a string in roman number format(s), your task is to convert it to an integer*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

// Function to calculate decimal value of roman character.
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

// Function to return the total value of roman number.
int romanToDecimal(string& str) {
    int res = 0;

    for (int i = 0; i < str.length(); i++) {
        // value of s[i]
        int s1 = value(str[i]);

        if (i + 1 < str.length()) {
            // value of s[i+1]
            int s2 = value(str[i + 1]);

            if (s1 >= s2) {

                res = res + s1;
            }
            else {
                res = res + s2 - s1;
                i++;
            }
        }
        else {
            res = res + s1;
        }
    }
    return res;
}

// Driver code
int main()
{   
    string str = "IV";

	cout << romanToDecimal(str);
	
    return 0;
}
