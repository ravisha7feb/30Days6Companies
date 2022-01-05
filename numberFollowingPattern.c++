// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string seq){
        
        string result;
 
        stack<int> stk;
     
        // run n+1 times where n is length of input sequence, so that last set of characters come up in the result
        for (int i = 0; i <= seq.length(); i++)
        {
            // push number i+1 into the stack
            stk.push(i + 1);
     
            if (i == seq.length() || seq[i] == 'I')
            {
                
                while (!stk.empty())
                {
                    
                    result += to_string(stk.top());
                    stk.pop();
                }
            }
        }
        return result;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends