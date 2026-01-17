class Solution {
  public:
    bool isSafe(vector<vector<int>>& maze, vector<vector<int>>& visited, int i, int j){
        if (i >= 0 && j >= 0 && i < maze.size() && j < maze.size() && visited[i][j] != 1 && maze[i][j] == 1)
            return true;
        return false;
    }
    void helper(vector<vector<int>>& maze, vector<vector<int>>& visited,
                string temp,vector<string>& ans, int i, int j) {
                    if(i==maze.size()-1 && j==maze.size()-1){
                        ans.push_back(temp);
                        return;
                    }
                    
                    visited[i][j]=1;
if (isSafe(maze, visited, i + 1, j))
            helper(maze, visited, temp + 'D', ans, i + 1, j);
        if (isSafe(maze, visited, i, j - 1))
            helper(maze, visited, temp + 'L', ans, i, j - 1);
        if (isSafe(maze, visited, i, j + 1))
            helper(maze, visited, temp + 'R', ans, i, j + 1);
        if (isSafe(maze, visited, i - 1, j))
            helper(maze, visited, temp + 'U', ans, i - 1, j);
                    visited[i][j]=0;
                }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<vector<int>> visited(maze.size(), vector<int>(maze.size(),0));
        vector<string> ans;
        helper(maze, visited,"",ans, 0, 0);
        return ans;
    }
};