class Solution {
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        vector<vector<int>> visited(maze.size(), vector<int>(maze[0].size(), 0));
        helper(maze,visited,ans,"",0,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
    void helper(vector<vector<int>>& maze, vector<vector<int>>& visited,vector<string>& ans, string temp, int i, int j){
        if(i==maze.size()-1 && j==maze.size()-1){
            ans.push_back(temp);
            return;
        }
        visited[i][j]=1;
        if(isSafe(maze,visited,i+1,j))
            helper(maze,visited,ans,temp+"D",i+1,j);
        if(isSafe(maze,visited,i,j+1))
            helper(maze,visited,ans,temp+"R",i,j+1);
        if(isSafe(maze,visited,i-1,j))
            helper(maze,visited,ans,temp+"U",i-1,j);
        if(isSafe(maze,visited,i,j-1))
            helper(maze,visited,ans,temp+"L",i,j-1);
        visited[i][j]=0;
    }
    bool isSafe(vector<vector<int>>& maze, vector<vector<int>>& visited, int i, int j){
        if(i<maze.size() && j < maze.size() && maze[i][j]==1 && visited[i][j]!=1 && i>=0 && j>=0)
            return true;
        return false;
    }
};