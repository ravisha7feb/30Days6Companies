// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

//DP Solution: TC: O(N), SC: O(N)

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull ugly[n];
        unsigned i2 = 0, i3 = 0, i5 = 0;
        ull next_multiple_of_2 = 2;
        ull next_multiple_of_3 = 3;
        ull next_multiple_of_5 = 5;
        ull nextUgly = 1;
     
        ugly[0] = 1;
        for (int i = 1; i < n; i++) {
            nextUgly = min(
                next_multiple_of_2,
                min(next_multiple_of_3, next_multiple_of_5));
            ugly[i] = nextUgly;//for further steps
            
            if (nextUgly == next_multiple_of_2) {//move forward in multiple of 2
                i2 = i2 + 1;
                next_multiple_of_2 = ugly[i2] * 2;
            }
            if (nextUgly == next_multiple_of_3) {
                i3 = i3 + 1;
                next_multiple_of_3 = ugly[i3] * 3;
            }
            if (nextUgly == next_multiple_of_5) {
                i5 = i5 + 1;
                next_multiple_of_5 = ugly[i5] * 5;
            }
        } 
       
        // End of for loop (i=1; i<n; i++)
        return nextUgly;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends