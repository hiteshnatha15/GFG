//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int numberOfConsecutiveOnes(int n) {
        // code here
        int m=1e9+7;
        vector<int>dp(n);
        

        if(n==1) return 1;
    
        dp[1]=1;
        int a=0;
        int b=1;
        int c=a+b;
        for(int i=2; i<n; i++){
            dp[i]=((2*dp[i-1])%m+c)%m;
        
             a=b%m;
             b=c%m;
             c=(a+b)%m;
        }
        return dp[n-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends