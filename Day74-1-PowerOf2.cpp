//Power of 2
/*Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.*/
#include<iostream>

using namespace std;

    // Function to check if given number n is a power of two.
bool isPowerofTwo(long long n) {

    if (n == 0)
        return false;
    if (n == 1)
        return true;
    if (log2(n) == floor(log2(n)))
        return true;
    else
        return false;
}

// Driver code
int main()
{
    long long n; //input a number n
    cin >> n;

    if (isPowerofTwo(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
