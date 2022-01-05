// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string s){
		    // Code here
		    if(s.length() == 0)
                return 0;
            int prev = 1, secPrev, n = s.length() ;
            for(int i = n - 1; i >= 0; i--){
               
                int curr = s[i] == '0' ? 0 : prev%1000000007 ; //taking s[i] alone
                if( i < n - 1 && ( s[i] == '1' || (s[i] == '2' && s[i + 1] < '7') ) ) //pairable
                    curr = (curr + secPrev)%1000000007 ; //taking s[i] and s[i + 1] as a pair
                
                secPrev = prev ;
                prev = curr ;
                
            }
            return prev % (1000000007);
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends