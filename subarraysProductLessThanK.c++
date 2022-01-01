// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k <= 1)
            return 0;
        long long prod = 1;
        int ans = 0, left = 0;
        for(int right = 0; right < a.size(); right++){
            prod *= a[right];
            while(left < right && prod >= k){
                prod /= a[left] ;
                left++;
            }
            if(prod < k)
                ans += (right - left + 1);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends