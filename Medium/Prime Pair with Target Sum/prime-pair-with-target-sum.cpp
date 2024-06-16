//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
    
  vector<int>sieve_of_eratosthenes(int n)
{
    vector<bool>is_p(n+1,true);
    is_p[0] = is_p[1]= false;
    for (int p = 2; p * p <= n; p++) {
        if (is_p[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_p[i] = false;
            }
        }
    }
    vector<int>ans;
    for (int i = 2; i <is_p.size(); i++) {
        if (is_p[i]) {
            ans.push_back(i);
        }
    }
    return ans;
    
}
 
  public:
    vector<int> getPrimes(int n) {
        vector<int>ans=sieve_of_eratosthenes(n);
        int s=0;
        int e=ans.size()-1;
        while(s<=e)
        {
            if(ans[s]+ans[e]==n)
            {
                return {ans[s],ans[e]};
            }
            else if(ans[s]+ans[e]>n)
            {
                e--;
            }
            else
            {
                s++;
            }
        }
       return {-1,-1}; 
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends