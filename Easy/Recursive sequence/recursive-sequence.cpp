//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long sum=0;
        int add=1;
        for(int i=0;i<n;i++){
            long prd=1;
            for(int j=0;j<=i;j++){
               prd=(prd*add)%1000000007;
               add++;
            }
            sum=(sum+prd)%1000000007;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends