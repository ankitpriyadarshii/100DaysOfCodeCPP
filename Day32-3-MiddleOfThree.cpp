// Middle of Three
/*Given three distinct numbers A, B and C. Find the number with value in middle*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
#include<cmath>

using namespace std;

// Function to return the middle value out of A, B and C
int middle(int A, int B, int C) {
    int mid[] = { A, B, C };
    int n = 3;
    sort(mid, mid + n);
    return mid[1];
}


// Driver code
int main()
{   
    int a = 23;
    int b = 98;
    int c = 56;

    int ans = middle(a, b, c);
    cout << ans;
    return 0;
}
