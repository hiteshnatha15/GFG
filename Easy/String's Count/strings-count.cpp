//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends

#define lli long long int
lli countStr(long long int n) {
    lli a = 1, b = n, c = n;
    lli ab = n * (n - 1);
    lli ac = ab / 2;
    lli bc = ac * (n - 2);
    return a + b + c + ab + bc + ac;
}