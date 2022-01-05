#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //TC: O(n * log n)
    //SC: O(1)
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int> prefSum;
        prefSum.push_back(0) ;
        for(int i = 0; i < nums.size(); i++){
            prefSum.push_back(prefSum[i] + nums[i]) ;
        }
        /*for(int i: prefSum)
            cout << i << " ";*/
        int minLen = INT_MAX ;
        int len;
        int left = 0 ;
        
        for(int r = 1; r <= nums.size(); r++){
            int sum = prefSum[r] - prefSum[left] ;
            while(sum >= target){
                minLen = min(minLen, (r - left)) ;
                left++;
                sum = prefSum[r] - prefSum[left] ;
            }
        }
        
        
        if( minLen == INT_MAX)
            return 0;
        return minLen;
    }
};
//[2,3,1,2,4,3]
// 0, 2, 5, 6, 8, 12, 15

// 0: 4  [2,3,1,2]
// 2: 5  [2,3,1,2,4]
// 5: 4  [3,1,2,4]
// 6: 
// 8:    [4,3]