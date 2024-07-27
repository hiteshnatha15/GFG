//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int smax=INT_MIN;
        int maxi=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(maxi<arr[i]){
                smax=maxi;
                maxi=arr[i];
                }
            else if(smax<arr[i] && arr[i]!=maxi)
                smax=arr[i];
        }
        if(smax==INT_MIN)
        return -1;
        return smax;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends