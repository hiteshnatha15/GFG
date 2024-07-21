//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>> help;
        for(auto &it:mp)
        {
            help.push_back(it);
        }
        sort(help.begin(),help.end(),[](const auto &a,const auto &b){
            if(a.second==b.second)
            return a.first<b.first;
            else
            return a.second>b.second;
        });
        for(auto &it: help){
            v.insert(v.end(),it.second,it.first);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends