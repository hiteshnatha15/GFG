//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) 
    {
        //Your code here
        int number=0;
        bool positive=1;
        int i=0;
        if(s[0]=='-')
        {
            positive=0;
            i=1;
        }
        for(i;i<s.length();i++)
        {
            char ch=s[i];
            if(ch>=48 && ch<=57)
            {
                number=(number*10)+(ch-48);
            }
            else
            return -1;
        }
        if(positive==0)
        number=-number;
        
        return number;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends