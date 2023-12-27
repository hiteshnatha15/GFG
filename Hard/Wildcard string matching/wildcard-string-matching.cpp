//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool solve(string&wild,string&pattern,int i,int j)
    {
        if(i>=wild.size() && j>=pattern.size()) return true;
        if(wild[i]!='?' && wild[i]!='*')
        {
            if(wild[i]!=pattern[j]) return false;
        }
        if(wild[i]=='?' || (wild[i]>='a' && wild[i]<='z')) return solve(wild,pattern,i+1,j+1);
        else if(wild[i]=='*'){
            for(int it=j+1;it<=pattern.size();++it){
                if(solve(wild,pattern,i+1,it)) return true;
            }
        }
        return false;
    }
    public:
    bool match(string wild, string pattern)
    {
        return solve(wild,pattern,0,0);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends