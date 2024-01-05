//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> v;
        int mul;
        int carry=0;
        v.push_back(1);
        
        for(int i=1;i<=N;i++)
        {
            for(int j=0;j<v.size();j++)
            {
                mul=(v[j]*i)+carry;
                v[j]=mul%10;
                carry=mul/10;
            }
            while(carry)
            {
                v.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends