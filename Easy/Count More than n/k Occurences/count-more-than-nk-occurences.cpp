//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k)
    {
        // Your code here
        sort(arr,arr+n);
        int count=1;
        int final=0;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]==arr[i])
            {
                count++;
            }
            else
            {
                if(count>n/k)
            {
                final++;
            }
                count=1;
            }
        }
            if(count>n/k)
            {
                final++;
            }
        
        return final;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends