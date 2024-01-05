//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    long long int a=1;
	    long long int b=1;
	    long long int ans=0;
	    
	    for(int i=1;i<=N;i++)
	    {
	        ans=(a+b)%1000000007;
	        a=b;
	        b=ans;
	    }
	    ans=(ans*ans)%1000000007;
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends