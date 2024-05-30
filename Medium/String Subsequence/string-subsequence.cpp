//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

const int mod=1e9+7;
class Solution {
    public:
    int solve(int ind1,int ind2,string &s1,string &s2,vector<vector<int>>&dp){
        if(ind2<0){
            return 1;
        }
        if(ind1<0){
            return 0;
        }
        if(dp[ind1][ind2]!=-1){
            return dp[ind1][ind2]%mod;
        }
        if(s1[ind1]==s2[ind2]){
            return dp[ind1][ind2]=(solve(ind1-1,ind2-1,s1,s2,dp)%mod+solve(ind1-1,ind2,s1,s2,dp)%mod)%mod;
        }
        return dp[ind1][ind2]=solve(ind1-1,ind2,s1,s2,dp)%mod;
    }
    
    int countWays(string &s1, string &s2) {
        int n=s1.length();
        int m=s2.length();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s1,s2,dp)%mod;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends