//Minimum distance between two numbers
//https://practice.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int e1 = -1;
        int e2 = -1;
        int dist = INT_MAX;
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
                e1 = i;
            if(a[i] == y)
                e2 = i;
                
            if(e1 != -1 && e2 != -1)
                if(abs(e1-e2) < dist)
                    dist = abs(e1-e2);
        }
        if(dist == INT_MAX)
            return -1;
        return dist;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
