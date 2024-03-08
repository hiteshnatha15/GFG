//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    int arr[26]={0};
	    for(auto ch: s) arr[ch-'a']++;
	    int cnt=0;
	    int mn=INT_MAX, mx=0;
	    for(int i=0; i<26; i++){ if (arr[i]!=0){
	        mn=min(mn, arr[i]);
	        mx=max(mx, arr[i]);
	    }}
	    if (mx == 0 or (mn == mx)) return true; int cntmn=0, cntmx=0;
	    if (abs(mn-mx) > 1) return false;
	    for(int i=0; i<26; i++){
	        if (arr[i]==0) continue;
	        if (arr[i] == mn) cntmn++;
	        else if (arr[i] == mx) cntmx++;
	        else return false;
	    }
	    if (abs(cntmn - cntmx) > 1 or (mn!=1 and cntmx!=1)) return false;
	    return true;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends