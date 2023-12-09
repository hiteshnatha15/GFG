//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    bool isPrime(int n){
        
        if(n == 1)  return false;
        
        for(int i = 2; i * i <= n; i++){
            
            if(n % i == 0)  return false;
            
        }
        
        return true;
        
    }
    
    int digitSum(int n){
        
        int res = 0;
        
        while(n){
            
            res += n % 10;
            
            n = n / 10;
            
        }
        
        return res;
        
    }
    
    int smithNum(int n) {
        // code here
        int sum = digitSum(n);
        
        int primeSum = 0;
        
        if(isPrime(n))  return 0;
        
        for(int i = 2; i <= n; i++){
            
            if(n % i == 0){
                
                int primeDigitSum = digitSum(i);
                
                while(n > 0 && n % i == 0){
                    
                    primeSum += primeDigitSum;
                    
                    n = n / i;
                    
                }
                
            }
            
        }
        
        return primeSum == sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends