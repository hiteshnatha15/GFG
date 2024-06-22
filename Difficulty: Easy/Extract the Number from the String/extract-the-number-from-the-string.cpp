//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string s) {

        // code here
        long long num = 0, mx = -1;
        
        for(int i=0; i< s.size(); ++i){
            
            
            if(isdigit(s[i]) && s[i] != '9'){
                if(s[i] == '9'){
                    num = 0;
                }
                else if(s[i] != '9')
                    num = num*10 + s[i] - '0';
                    mx = max(mx, num);
            }   
            else if(isdigit(s[i]) && s[i] == '9'){
                while(isdigit(s[i]))
                    i++;
            i--;
            }
            else
                num = 0;
            
        }
        
        if(mx != -1)
            return mx;
        else
            return -1;
        
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends