//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N)
    {
        // code here
        vector<int> vect;
        int temp=N;
        
        if(N<=0)
        {
            vect.push_back(N);
            return vect;
        }
        
        do
        {
            vect.push_back(N);
            N=N-5;
        }
        while(N>0);
        
        while(temp>=N)
        {
            vect.push_back(N);
            N=N+5;
        }
        return vect;
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
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends