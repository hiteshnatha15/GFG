//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
         int mini[n];
        int maxi[n];
        mini[0] = a[0];
        maxi[n-1] = a[n-1];
        for(int i=1; i<n; i++){
            if(a[i]<mini[i-1]) mini[i] = a[i];
            else mini[i] = mini[i-1];
        }
        for(int i=n-2; i>=0; i--){
            if(a[i]>=maxi[i+1]) maxi[i] = a[i];
            else maxi[i] = maxi[i+1];
        }
        int pt1 = 0;
        int pt2 = 0;
        int ans = 0;
        
        
        while(pt1<n){
            while(pt2<n && mini[pt1]<=maxi[pt2]){
                pt2++;
            }
            ans = max(ans, pt2-pt1-1);
            pt1++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends