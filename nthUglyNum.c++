// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    if (n == 1 or n == 2 or n == 3 or n == 4 or n == 5)
            return n;
        //using set and not minheap to avoid duplicate numbers
        set<ull> s;
        s.insert(1);
        n--;
     
        while (n) {
            auto it = s.begin();
     
            long long int x = *it;
            //cout << x << " ";
            
            s.erase(it);
     
            s.insert(x * 2);
            s.insert(x * 3);
            s.insert(x * 5);
            n--;
        }
     
        // The top of the set represents the nth ugly number
        return *s.begin();
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