//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool isAdditiveSequence(string s) {
        // Your code here
        // size find kar lo phale string ka
    int n = s.size();

// first number of string ka bana.
    int num1 = 0;
    for (int i = 0; i < n / 2; i++) {
        num1 = num1 * 10 + (s[i] - '0');

// string ka second number banana
        int num2 = 0;
        for (int j = i + 1; j < n - 1; j++) {
            num2 = num2 * 10 + (s[j] - '0');
            int first = num1, sec = num2;

// string ka third number nikalna
            int num3 = 0;

// third number banane k liye usko j+1 pe initialize kiya jata hai
            int k = j + 1;
            while (k < n) {
                num3 = num3 * 10 + (s[k] - '0');

 

// agra phela or dura number ka sum terse number k equal ho jaye tho , sec number ko phale bana do and third number ko sec and third number ko fir se 0 se intialise kr do
                if (num3 == first+sec) {
                    first = sec;
                    sec = num3;
                    num3 = 0;
                }

                k++;
            }

// agar kahi bhi k size tk pohch jaye or third number 0 ho eska mtlb ki use phale tk sab k liye lop chl chuka hai first of sec ka sum humesa third k barabar aaya hai tho true return kr do
            if (k == n && num3 == 0)
                return true;
        }
    }

 

// agar true return nhi hua hai eska matalb hai ki condition kahi bhi true nhi hu hai tho false return kr do.
    return false;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    Solution sol;

    while (t--) {
        string s;
        cin >> s;

        bool result = sol.isAdditiveSequence(s);
        cout << result << endl;
    }

    return 0;
}

// } Driver Code Ends