//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
private:
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& visited, int i, int j, int componentId, int& size) {
        int n = grid.size();
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1 || visited[i][j] != -1) {
            return;
        }
        visited[i][j] = componentId;
        size++;
        
        dfs(grid, visited, i - 1, j, componentId, size);
        dfs(grid, visited, i + 1, j, componentId, size);
        dfs(grid, visited, i, j - 1, componentId, size);
        dfs(grid, visited, i, j + 1, componentId, size);
    }
    
public:
    int MaxConnection(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> visited(n, vector<int>(n, -1));
        unordered_map<int, int> componentSize;
        int componentId = 0;
        int maxComponentSize = 0;
        
        // Find all components
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && visited[i][j] == -1) {
                    int size = 0;
                    dfs(grid, visited, i, j, componentId, size);
                    componentSize[componentId] = size;
                    maxComponentSize = max(maxComponentSize, size);
                    componentId++;
                }
            }
        }
        
        // Try changing each 0 to 1 and calculate the potential maximum size
        int potentialMaxSize = maxComponentSize;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unordered_set<int> adjacentComponents;
                    if (i > 0 && grid[i-1][j] == 1) adjacentComponents.insert(visited[i-1][j]);
                    if (i < n-1 && grid[i+1][j] == 1) adjacentComponents.insert(visited[i+1][j]);
                    if (j > 0 && grid[i][j-1] == 1) adjacentComponents.insert(visited[i][j-1]);
                    if (j < n-1 && grid[i][j+1] == 1) adjacentComponents.insert(visited[i][j+1]);
                    
                    int currentSize = 1; // Changing this 0 to 1
                    for (int compId : adjacentComponents) {
                        currentSize += componentSize[compId];
                    }
                    potentialMaxSize = max(potentialMaxSize, currentSize);
                }
            }
        }
        
        return potentialMaxSize;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout << obj.MaxConnection(grid) << "\n";
    }
}

// } Driver Code Ends