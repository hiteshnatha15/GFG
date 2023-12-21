//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        // code here
        vector<int> left(N),right(N);
        
        for(int i=0; i<N; i++){
            int ind = i;
            while(ind < N-1 && ratings[ind] > ratings[ind+1]) ind++;
            right[i] = ind;
            ind = i;
            while(ind > 0 && ratings[ind] > ratings[ind-1]) ind--;
            left[i] = ind;
        }
        
        int total = N;
        for(int i=0; i<N; i++){
            total += max(right[i]-i, i-left[i]);
        }
        return total;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> ratings(N);
        for (int i = 0; i < N; i++) {
            cin >> ratings[i];
        }
        Solution obj;
        cout << obj.minCandy(N, ratings) << endl;
    }
    return 0;
}
// } Driver Code Ends