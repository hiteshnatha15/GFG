//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        string final="";
        string temp="";
        
        for(int i=S.size()-1;i>=0;i--)
        {
            if(S[i]!='.')
            temp=temp+S[i];
            
            else if(S[i]=='.')
            {
                reverse(temp.begin(),temp.end());
                final=final+temp+'.';
                temp="";
            }
        }
        reverse(temp.begin(),temp.end());
        final=final+temp;
        
        return final;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends