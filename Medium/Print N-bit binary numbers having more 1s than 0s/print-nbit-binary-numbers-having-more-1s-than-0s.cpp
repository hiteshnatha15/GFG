//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
 void solve(string s, int zeroCount, int oneCount, vector<string> &ans, int n){
        if(zeroCount > oneCount)
        return;
        
        if(s.size() == n){
            ans.push_back(s);
            return;
            
        }
        
        solve(s+"1", zeroCount, oneCount+1, ans, n);
        solve(s+"0", zeroCount+1, oneCount, ans, n);
    
    }
    
public:
vector<string> NBitBinary(int n)
{
    // Your code goes here
    vector<string> ans;
    solve("1", 0, 1, ans, n);
    return ans;
    
}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends