//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
       int findNum(int n)
        {
        // Complete this function
          for(int i=0;i<1e5;i++)
            {
                int x=i/5 + i/25 + i/125 +i/625 + i/3125 + i/15625;
                if(x>=n)return i;
            }
            return 0;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends