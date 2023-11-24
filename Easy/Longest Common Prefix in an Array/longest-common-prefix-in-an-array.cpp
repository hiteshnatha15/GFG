//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N);
        string compare=arr[0];
        int compareSize=arr[0].size();
        
        for(int i=1;i<N;i++)
        {
            if(arr[i].substr(0,compareSize)==compare)
            {
                
            }
            else
            {
                i=0;
                compare.pop_back();
                compareSize--;
            }
        }
        
        if(compare.size())
        {
            return compare;
        }
        else
        {
            return "-1";
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends