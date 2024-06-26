//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                     if(j+1<matrix[i].size() && matrix[i][j+1]==1)  

                                                                                        
                    {
                        count++;
                    }
                    if(j-1>=0 && matrix[i][j-1]==1)  
                    {
                        count++;
                    }
                    if(i+1<matrix.size() && matrix[i+1][j]==1)  
                    {
                        count++;
                    }
                    if(i-1>=0 && matrix[i-1][j]==1)
                    {
                        count++;
                    }
                }
            }
        }
        return count;


    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends