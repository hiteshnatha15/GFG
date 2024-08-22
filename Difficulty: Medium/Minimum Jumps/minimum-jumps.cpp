//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int i=0;
        int cnt=0;
        int ma;
        if(n==1) return 0;
        while(i<n){
            if(arr[i]==0) return -1;
            int x=arr[i];
            cnt++;
            int j=i+1;
            int cnt1=x;
            int cnt3=0;
            ma=-1;
            if(arr[i]>=(n-i-1))
                return cnt;
            while(cnt1--){
                cnt3++;
                if((ma-cnt3)<=arr[j]){
                    ma=arr[j];
                    i=j;
                    cnt3=0;
                }
                j++;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends