//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        vector<int> count(26,0);
        for(char i:s) count[i-'a']++;
        priority_queue<int> q;
        for(auto i:count) q.push(i);
        while(k!=0 && !q.empty()){
            int top = q.top();
            q.pop();
            top--;
            if(top>0) q.push(top);
            k--;
        }
        int ans=0;
        while(!q.empty()){
            ans+=q.top()*q.top();
            q.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends