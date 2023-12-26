//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
                int n = matrix.size();
        vector<vector<int>> vis(n, vector<int>(n, 0));
        vector<int> ans;
        int startX = 0, startY = 0;
        while(ans.size() < n*n)
        {
            int i = startX, j = startY;
            while(i >= 0 && j >= 0 && i < n && j < n)
            {
                if(vis[i][j] == 0)
                {
                    vis[i][j] = 1;
                    ans.push_back(matrix[i][j]);
                }
                i++;
                j--;
            }
            if(startX + startY < n-1)
            {
                startY++;
            }
            else
            {
                startX++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends