//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
                vector<int> check;
        while(r--){
            check.push_back(n);
             n=n/2;
        }
        
        int ans=s[n]-'0';
        for(int i=check.size()-1;i>=0;i--){


            if(check[i]%2!=0) ans=1-ans;
        
        }
        return ans+'0';
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends