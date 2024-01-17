//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>> ans;
        set<vector<int>> s;
        
        ans.push_back(arr);
        s.insert(arr);
        
        if(n==1) return ans;
        
        while(1){
            // finding next possible Permutation
            int ind = -1;
            for(int i = n-2; i>=0; i--){
                if(arr[i]<arr[i+1]){
                    ind = i;
                    break;
                }
            }
            for(int i = n-1; i > ind && ind!=-1; i--){
                if(arr[i] > arr[ind]){
                    swap(arr[i], arr[ind]);
                    break;
                }
            }
            reverse(arr.begin()+ind+1, arr.end());
            
            // if new permutaion is already found earlier then stop finding new permutations
            if(s.find(arr)!=s.end()) 
                break;  
            ans.push_back(arr);
            s.insert(arr);
        }
        
        // ans is required in sorted form
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends