class Solution {
  public:
    int findMin(int n) {
        // code here
        vector<int> coins({10,5,2,1});
        int ans=0;
        for(int i=0;i<coins.size();i++){
            ans+=(n/coins[i]);
            n%=coins[i];
        }
        return ans;
    }
};