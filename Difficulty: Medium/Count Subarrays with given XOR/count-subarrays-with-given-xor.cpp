class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        long xorr=0;
        long ans=0;
        map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            xorr^=arr[i];
            ans+=mp[xorr^k];
            mp[xorr]++;
        }
        return ans;
    }
};