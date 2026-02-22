class Solution {
    private boolean isSafe(int[][] maze, int[][] visited,int i, int j){
        if(i<maze.length && j<maze.length && i>=0 && j>=0 && maze[i][j]==1 && visited[i][j]==-1)
            return true;
        return false;
    }
    private void helper(int[][] maze, int[][] visited, ArrayList<String> ans, String s, int i, int j){
        if(i==maze.length-1 && j==maze.length-1){
            ans.add(s);
            return;
        }
        visited[i][j]=1;
        if(isSafe(maze,visited,i+1,j))
            helper(maze,visited,ans,s+"D",i+1,j);
        if(isSafe(maze,visited,i,j-1))
            helper(maze,visited,ans,s+"L",i,j-1);
        if(isSafe(maze,visited,i,j+1))
            helper(maze,visited,ans,s+"R",i,j+1);
        if(isSafe(maze,visited,i-1,j))
            helper(maze,visited,ans,s+"U",i-1,j);
        visited[i][j]=-1;
    }
    public ArrayList<String> ratInMaze(int[][] maze) {
        // code here
        int[][] visited = new int[maze.length][maze.length];
        for(int i=0;i<maze.length;i++){
            Arrays.fill(visited[i],-1);
        }
        ArrayList<String> ans = new ArrayList<>();
        helper(maze,visited,ans,"",0,0);
        return ans;
    }
}