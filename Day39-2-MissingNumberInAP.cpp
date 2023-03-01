// Missing Number in AP
/*Given three integers  
'A' denoting the first term of an arithmetic sequence , 
'C' denoting the common difference of an arithmetic sequence and an integer 'B'. 
You need to tell whether 'B' exists in the arithmetic sequence or not. 
Return 1 if B is present in the sequence. Otherwise, returns 0.*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


using namespace std;

// Function to check if B exists in Arithmetic sequence or not
int inSequence(int A, int B, int C) {
    // code here
    if (C == 0)
        return A == B;
    else if ((B - A) % C == 0 and (B - A) / C >= 0) {  // if difference is a multiple of C and if it is a +ve number 
        return 1;
    }
    else
        return 0;
}


// Driver code
int main()
{   
    int a = 1;
    int b = 3;
    int c = 2;

    cout << inSequence(a, b, c);

	return 0;
}
