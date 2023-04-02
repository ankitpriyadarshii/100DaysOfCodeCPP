//Check if it is possible to survive on Island
/*Ishika got stuck on an island. 
There is only one shop on this island and it is open on all days of the week except for Sunday. 
Consider following constraints:

N – The maximum unit of food you can buy each day.
S – Number of days you are required to survive.
M – Unit of food required each day to survive.
Currently, it’s Monday, and she needs to survive for the next S days.
Find the minimum number of days on which you need to buy food from the shop so that 
she can survive the next S days, or determine that it isn’t possible to survive.
*/


#include <iostream>

using namespace std;

// Function to calculate minimum no of days for survival
int minimumDays(int S, int N, int M) {
    // code here
    if (M > N) {
        return -1;
    }
    int ans = S * M;
    int result = (S - (S / 7)) * N;
    if (result >= ans) {
        if ((S * M) % N == 0) {
            return(ans / N);
        }
        else {
            return(ans / N) + 1;
        }
    }
    return -1;
}


// Driver Code Starts.

int main() {

    int S, N, M;
    cin >> S >> N >> M;

    cout << minimumDays(S, N, M);
    return 0;
}
