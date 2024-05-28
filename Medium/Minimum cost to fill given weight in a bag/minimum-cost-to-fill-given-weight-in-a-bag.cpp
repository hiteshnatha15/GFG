//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
   int fun(int i,int n,int w,vector<int> &cost,vector<vector<int>> &dp)
    {
        if(w==0)
            return 0;
        if(i==n && w!=0)
            return 1e9;
        if(i==n && w==0)
            return 0;
        int t=1e9;
        int nt=1e9;
        if(dp[i][w]!=-1)    return dp[i][w];
        
        if(i+1<=w)
        {
            if(cost[i]!=-1)
            {
                t=cost[i]+fun(i,n,w-i-1,cost,dp);
            }
        }
        
        nt=fun(i+1,n,w,cost,dp);
        return dp[i][w]=min(t,nt);
    }
    
    int minimumCost(int n, int w, vector<int> &cost) {
        
        vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
        int ans=fun(0,n,w,cost,dp);
        if(ans>=1e9)
            return -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int w;
        scanf("%d", &w);

        vector<int> cost(n);
        Array::input(cost, n);

        Solution obj;
        int res = obj.minimumCost(n, w, cost);

        cout << res << endl;
    }
}

// } Driver Code Ends