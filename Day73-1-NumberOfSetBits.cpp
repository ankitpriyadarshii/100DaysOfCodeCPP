//Number of 1 Bits
/*Given a positive integer N, print count of set bits in it. */


#include <iostream>
using namespace std;


int setBits(int N) {
    int n = N;
    int cnt = 0;
    while (n != 0) {
        if (n % 2 == 1)
            ++cnt;
        n /= 2;
    }
    return cnt;
}
    
//{ Driver Code Starts.
int main() {
    int N;
    cin >> N;
    int cnt = setBits(N);
    cout << cnt << endl;

    return 0;
}
    
\