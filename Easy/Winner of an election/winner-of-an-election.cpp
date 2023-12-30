//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
 vector<string> winner(string arr[],int n)
    {
        int currMax=0;
        string winner="";
        unordered_map<string,int>mp;
        mp[""]=0;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>currMax){
                winner=arr[i];
                currMax=mp[arr[i]];
            }else if(mp[arr[i]]==currMax){
                winner=arr[i]>winner?winner:arr[i];
            }
        }
        return {winner,to_string(currMax)};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends