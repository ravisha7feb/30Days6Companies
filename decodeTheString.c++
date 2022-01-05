// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string concat(int n, string s){
        string join = "";
        for(int i = 0; i < n; i++){
            join += s;
        }
        return join;
    }
    string decodedString(string s){
        // code here
        bool allDig = true;
        for(char i: s){
            if(isalpha(i)){
                allDig = false;
                break;
            }
                
        }
        
        if(allDig)
            return "";
        
        string decode = "", str = "";
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ']')
            {
                
                while(st.top() != '[' ){
                    str += st.top();
                    st.pop();
                }
                
                st.pop(); //remove '['
                string n = "" ;
                
                while( !st.empty() ){
                    //cout << st.top() << " ";
                    if(isdigit(st.top()))
                        n += st.top(), st.pop() ;
                    else
                        break;
                    
                }
                
                reverse(n.begin(), n.end()) ;
                //cout << n << " " ;
                int freq = stoi(n) ;
                reverse(str.begin(), str.end()) ;
                //cout << freq << str << endl;
                decode = concat(freq, str ) ;
                for(char i: decode) //pushing the decoded string uptil now(it may be used later, if it lies inside another set of brackets)
                    st.push(i) ;
                str = "";
                
            }
            //if( isdigit(s[i]) || s[i] == '[' || isalpha(s[i]) )
                
            else 
                st.push(s[i]) ;
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end()) ;
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends