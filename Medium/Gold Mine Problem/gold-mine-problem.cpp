//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        for (int j=1; j<m; j++){
            for (int i=0; i<n; i++){
                int ma = M[i][j-1];
                if (i-1>=0)ma = max(ma,M[i-1][j-1]);
                if (i+1<n)ma = max(ma,M[i+1][j-1]);
                M[i][j] += ma;
            }
        }
        int res = 0;
        for (int i=0; i<n; i++)res = max(res,M[i][m-1]);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends