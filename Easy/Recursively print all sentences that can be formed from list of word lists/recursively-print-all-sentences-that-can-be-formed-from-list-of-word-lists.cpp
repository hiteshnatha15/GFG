//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
        vector<vector<string>> v;
    void f( vector<string> &a,vector<vector<string>> l,int i){
        if(i==l.size()){
            v.push_back(a);
            return ;
        }
        for(int k=0;k<l[i].size();k++){
            a.push_back(l[i][k]);
            f(a,l,i+1);
            a.pop_back();
        }
    }
    vector<vector<string>> sentences(vector<vector<string>>& l){
        //Write your code here
        vector<string> a;
        f(a,l,0);
        return v;
    }
};


//{ Driver Code Starts.
int main()
{
	int t = 1;
	//cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<vector<string>>list(m, vector<string>(n));
	    for(int i = 0 ; i < m; i++){
	        for(int j = 0; j < n; j++){
	            cin >> list[i][j];
	        }
	    }
	    Solution ob;
	    vector<vector<string>>ans = ob.sentences(list);
	    for(auto it : ans){
	        for(auto it1 : it){
	            cout << it1 << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}

// } Driver Code Ends