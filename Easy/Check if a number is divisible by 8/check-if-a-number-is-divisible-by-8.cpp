//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        if(s.size()>3)
        {
        string str=s.substr(s.size()-3,3);
        int num=stoi(str);
        if(num%8==0)
        return 1;
        return -1;
        }
        else
        {
            int n=stoi(s);
            if(n%8==0)
            return 1;
            return -1;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends