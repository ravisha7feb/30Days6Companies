/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

vector<int> max10(vector<int> nums){
    int s = 10;
    vector<int> ans;
    priority_queue<int> maxHeap;
    for(int i: nums){
        maxHeap.push(i);
    }
    ans.push_back(maxHeap.top()); maxHeap.pop();
    while(ans.size() < 10){
        while(!maxHeap.empty() && ans[ans.size() - 1] == maxHeap.top()){
            maxHeap.pop();
        }
        if(maxHeap.size() > 0)
            ans.push_back(maxHeap.top()), maxHeap.pop();
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> ans = max10(v);
    for(int i: ans){
        cout << i << " ";
    }
    return 0;
}
