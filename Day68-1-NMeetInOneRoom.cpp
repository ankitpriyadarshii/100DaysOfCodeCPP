// N meetings in one room
/*There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) 
where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room 
when only one meeting can be held in the meeting room at a particular time?*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//Function to find the maximum number of meetings that can be performed in a meeting room.
int maxMeetings(int start[], int end[], int n)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(end[i], start[i]));
    }
    sort(v.begin(), v.end());

    int res = 1;
    int prev = v[0].first;
    for (int curr = 1; curr < n; curr++)
    {
        if (v[curr].second > prev)
        {
            res++;
            prev = v[curr].first;
        }
    }
    return res;
}

//{ Driver Code Starts.
int main() {
    int n = 6;
    int start[] = { 1,3,0,5,8,5 };
    int end[] = { 2,4,6,7,9,9 };

    int ans = maxMeetings(start, end, n);
    cout << ans;
    return 0;
}
// } Driver Code Ends