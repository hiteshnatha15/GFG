class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<int,int> mp;
        int ans = 0;
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            int rem = sum - k;
            if (sum == k)
                ans = max(ans, i + 1);
            if(mp.find(rem)!=mp.end()){
                ans = max(ans,i-mp[rem]);
            }
            if (mp.find(sum) == mp.end())
                mp[sum] = i;
        }
        return ans;
        
    }
};