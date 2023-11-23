//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        int x,y;
        sort(arr.begin(),arr.end());
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                x = arr[i];
            }
            else if(arr[i+1] == arr[i]+2){
                y = arr[i]+1;
            }
        }
        if(arr[0]!=1){
            y = 1;
        }
        else if(arr[n-1]!=n){
            y = n;
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends