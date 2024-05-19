//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        unordered_map<int,int> mp ;
        int m = INT_MAX , curr;
        
        for(int i=0;i<n;i++){
            
            curr = abs(k-arr[i]);
            mp[curr]= max(arr[i],mp[curr] );
            
            m = min(m,curr);
        }
        
        return mp[m] ;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends