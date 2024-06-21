//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
         int i=0;
        long long int a=0,b=0,c=0,d=0;
        long long int ans=0;
        while(str[i]!='/')
        a = 1LL*a*10 + (str[i++]-'0');
        
        i = i+1;
        while(str[i]!=',')
        b = 1LL*b*10 + (str[i++]-'0');
        
        i = i+2;
        while(str[i]!='/')
        c = 1LL*c*10 + (str[i++]-'0');
        
        i=i+1;
        while(i<str.size())
        d = 1LL*d*10 + (str[i++]-'0');
        
        if((1LL*a*d) == (1LL*b*c)) return "equal";
        else if((1LL*a*d)>(1LL*c*b)) return to_string(a)+"/"+to_string(b);
        else  return to_string(c)+"/"+to_string(d);
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends