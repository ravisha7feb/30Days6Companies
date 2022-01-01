// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
//TC: O(n * k) => k is power of 2 => not time efficient

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	bool isUgly(int num) {
        for (int i = 2; i <= 5 && num; i++)
            while (num % i == 0)
                num /= i;
        
        return num == 1;
    }
	
	ull getNthUglyNo(int n) {
	    // code here
	    /*int i = 1;
     
        // Ugly number count
        int count = 1;
     
        // Check for all integers until ugly
        // count becomes n
        while (n > count)
        {
            i++;
            if (isUgly(i))
                count++;
        }
        return i;*/
	    
	    vector<int> first11 = {1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15};
	    if(n <= 11)
	        return first11[n - 1];
	    int k = 12; ull num = 16;
	    while(k < n){
	        num++;
	        if( isUgly(num) ){
	            k++;
	        }
	    }
	    
	    return num;
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