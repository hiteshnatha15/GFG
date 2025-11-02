// User function Template for C++
#define INT_NUM 200000
vector<int> factors(INT_NUM+1,1);

class Solution {
  public:

    void sieve() {
        for(int i=2;i<=INT_NUM;i++){
            if(factors[i]==1){
                for(int j=i;j<=INT_NUM;j+=i) {
                    if(factors[j]==1)
                        factors[j]=i;
                }
            }
        }
        return;
    }

    vector<int> findPrimeFactors(int N) {

        // Write your code here
        vector<int> ans;
        while(N!=1){
            ans.push_back(factors[N]);
            N/=factors[N];
        }
        return ans;
    }
};