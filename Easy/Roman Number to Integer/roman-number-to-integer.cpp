//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    
    int value(char ch)
    {
        if(ch=='I')
        return 1;
        if(ch=='V')
        return 5;
        if(ch=='X')
        return 10;
        if(ch=='L')
        return 50;
        if(ch=='C')
        return 100;
        if(ch=='D')
        return 500;
        if(ch=='M')
        return 1000;
    }
    int romanToDecimal(string &str) {
        // code here
        int res=0;
        for(int i=0;i<str.length();i++)
        {
            if(i<str.length()-1 && value(str[i])<value(str[i+1]))
            res=res-value(str[i]);
            else
            res=res+value(str[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends