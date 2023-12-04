//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
         int i=0 , j=0, sum=0 , ans = n+1;
       while(i<n)
       {
           sum = sum + arr[i];
           while(sum>x && j<=i)
           {
               
               ans = min(ans,i-j+1);   
               sum = sum-arr[j++];      
           }   
           i++;
       }
      return ans == n+1 ? 0 : ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends