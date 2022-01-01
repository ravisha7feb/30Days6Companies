// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{
    string ans = ""; int n = src.length();
    
    for(int i = 0; i < n; i++){
      int c = 1;
      while( i < n - 1 && src[i] == src[i + 1] ){
          c++;
          i++;
      }
      ans += src[i] + to_string(c);
      
    }
    return ans;
    
  //Your code here 
      
}     
 
