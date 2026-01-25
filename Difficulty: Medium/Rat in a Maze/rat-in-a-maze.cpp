class Solution {
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        vector<vector<int>> dp(maze.size(),vector<int>(maze.size(),0));
        helper(maze,ans,dp,"",0,0);
        return ans;
    }
    void helper(vector<vector<int>>& maze, vector<string>& ans, vector<vector<int>>& dp, string s,int i,int j){
        if(i==maze.size()-1 && j==maze.size()-1){
            ans.push_back(s);
            return;
        }
        dp[i][j] = 1;
        if(isSafe(maze,dp,i+1,j))
            helper(maze,ans,dp,s+'D',i+1,j);
        if(isSafe(maze,dp,i,j-1))
            helper(maze,ans,dp,s+'L',i,j-1);
        if(isSafe(maze,dp,i,j+1))
            helper(maze,ans,dp,s+'R',i,j+1);
        if(isSafe(maze,dp,i-1,j))
            helper(maze,ans,dp,s+'U',i-1,j);
        dp[i][j]=0;
    }
    bool isSafe(vector<vector<int>>& maze, vector<vector<int>>& dp,int i,int j){
        if(i<maze.size() && j<maze.size() && i>=0 && j>=0 && maze[i][j]==1 && dp[i][j]==0)
            return true;
        return false;
    }
};