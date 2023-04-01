// Job Sequencing Problem
/*Given a set of N jobs where each jobi has a deadline and profit associated with it.
Each job takes 1 unit of time to complete and only one job can be scheduled at a time. 
We earn the profit associated with job if and only if the job is completed by its deadline.
Find the number of jobs done and the maximum profit.*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int n = 4;
// Structure to represent job
struct Job {
    int id; // id of the job
    int dead; // deadline of the job
    int profit; // profit if job is over before or on deadline
};


//Function to compare profits of 2 jobs.
static bool comp(Job a, Job b) {
    return a.profit > b.profit;
}


//Function to find the maximum profit and the number of jobs done.
vector<int> JobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, comp);

    bool done[4] = { 0 };

    int day = 0, profit = 0;
    for (int i = 0; i < n; i++) {
        for (int j = min(n, arr[i].dead - 1); j >= 0; j--)
        {
            if (done[j] == false)
            {
                day += 1;
                profit += arr[i].profit;

                done[j] = true;

                break;
            }
        }
    }
    return { day,profit };
}

//{ Driver Code Starts.
int main() {

    Job arr[n];
    for (int i = 0; i < n; i++) {
        int x, y, z;
        arr[i].id = x;
        arr[i].dead = y;
        arr[i].profit = z;
    }

    vector<int> ans = JobScheduling(arr, n);
    cout << ans[0] << " " << ans[1];


    return 0;
}
// } Driver Code Ends