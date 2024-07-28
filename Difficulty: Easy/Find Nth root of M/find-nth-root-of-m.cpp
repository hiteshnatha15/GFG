//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low=1;
	    int high=m;
	    while(low<=high){
	        int mid=(low+high)/2;
	        long long temp=1;
	        for(int i=1;i<=n;i++){
	            temp=temp*mid;
	            if(temp>m)
	            break;
	        }
	        if(temp==m)
	            return mid;
	       else if(temp<m)
	           low=mid+1;
	       else
	            high=mid-1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends