//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String input[] = read.readLine().trim().split(" ");
            int n = Integer.parseInt(input[0]);
            int m = Integer.parseInt(input[1]);
            
            String S1 = read.readLine().trim();
            String S2 = read.readLine().trim();

            Solution ob = new Solution();
            System.out.println(ob.longestCommonSubstr(S1, S2, n, m));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    int longestCommonSubstr(String S1, String S2, int n, int m){
        // code here
        int max=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(S1.charAt(i)==S2.charAt(j)){
                    int k=j,h=i,count=0;
                    while(h<n&&k<m){
                        if(S1.charAt(h++)==S2.charAt(k++)) count++;
                        else break;
                    }
                    max=Math.max(max,count);
                }
            }
        }
        return max;
    }
}