//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int M = 1e9+7;
    int dp[1005][1005];
    int helper(string &s, string &t, int m, int n){
        if(n == 0)  return 1;
        if(m == 0)  return 0;
        
        if(dp[m - 1][n - 1] != -1)   return dp[m - 1][n - 1];
        
        long long res = 0;
        
        if(s[m - 1] == t[n - 1]){
            res = (res + helper(s, t, m - 1, n - 1))%M;
        }
        
        res = (res + helper(s, t, m - 1, n))%M;
        
        return dp[m - 1][n - 1] = res;
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
        int m = s.length(), n = t.length();
        memset(dp, -1, sizeof(dp));
        return helper(s, t, m, n);
    }


};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends