//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    map<string,int> mp;
    bool solve(int n, string s, vector<string> &dictionary, string temp)
    {
        if(temp.size() > s.size())
            return false;
        if(s == temp)
            return true;
        if(s.find(temp) == string::npos)
            return false;
        if(mp[temp] == 1)
            return true;
        for(int i = 0; i < n; i++)
        {
            bool ret = solve(n,s,dictionary,temp+dictionary[i]);
            if(ret)
            {   mp[temp+dictionary[i]]=1;  
                return true;
            }
        }
        return false;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) 
    {
        mp.clear();
        for(int i = 0; i < n; i++)
        {
            string temp = dictionary[i];
            if(temp[0] == s[0])
            {
                bool ans = solve(n,s,dictionary,dictionary[i]);
                if(ans)
                    return ans;
            }
            
        }
        return false;
        //code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends